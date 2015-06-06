/*Copyright (C) 2009 Cleriot Simon
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA*/

#include "rpcchatwindow.h"
#include "ui_rpcchatwindow.h"

RpcChatWindow::RpcChatWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::RpcChatWindowClass)
{
    ui->setupUi(this);
    setFixedSize(760,600);
    ui->splitter->hide();

	connect(ui->buttonConnect, SIGNAL(clicked()), this, SLOT(connecte()));

	connect(ui->actionQuit, SIGNAL(triggered()), this, SLOT(close()));
	connect(ui->actionCloseTab, SIGNAL(triggered()), this, SLOT(closeTab()));

	connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(sendCommande()));





    connect(ui->disconnect, SIGNAL(clicked()), this, SLOT(disconnectFromServer()));
	connect(ui->tab, SIGNAL(currentChanged(int)), this, SLOT(tabChanged(int)) );
	connect(ui->tab, SIGNAL(tabCloseRequested(int)), this, SLOT(tabClosing(int)) );

}



void RpcChatWindow::tabChanged(int index)
{
	if(index!=0 && joining == false)
		currentTab()->updateUsersList(ui->tab->tabText(index));
}

void RpcChatWindow::tabClosing(int index)
{
	currentTab()->leave(ui->tab->tabText(index));
}
/*void RpcChatWindow::tabRemoved(int index)
{
	currentTab()->leave(ui->tab->tabText(index));
}*/

void RpcChatWindow::disconnectFromServer() {

    QMapIterator<QString, Server*> i(servers);

    while(i.hasNext())
    {
        i.next();
        QMapIterator<QString, QTextEdit*> i2(i.value()->conversations);
        while(i2.hasNext())
        {
            i2.next();
            i.value()->sendData("QUIT "+i2.key() + " ");
        }
    }


    ui->splitter->hide();
    ui->hide3->show();

}

Server *RpcChatWindow::currentTab()
{
	QString tooltip=ui->tab->tabToolTip(ui->tab->currentIndex());
	return servers[tooltip];
	//return ui->tab->currentWidget()->findChild<Server *>();
}

void RpcChatWindow::closeTab()
{
	QString tooltip=ui->tab->tabToolTip(ui->tab->currentIndex());
	QString txt=ui->tab->tabText(ui->tab->currentIndex());

	if(txt==tooltip)
	{
		QMapIterator<QString, QTextEdit*> i(servers[tooltip]->conversations);

		int count=ui->tab->currentIndex()+1;

		while(i.hasNext())
		{
			i.next();
			ui->tab->removeTab(count);
		}

		currentTab()->abort();
		ui->tab->removeTab(ui->tab->currentIndex());
	}
	else
	{

        ui->tab->removeTab(ui->tab->currentIndex());
		currentTab()->conversations.remove(txt);
	}
}

void RpcChatWindow::sendCommande()
{
	QString tooltip=ui->tab->tabToolTip(ui->tab->currentIndex());
	QString txt=ui->tab->tabText(ui->tab->currentIndex());
	if(txt==tooltip)
	{
		currentTab()->sendData(currentTab()->parseCommande(ui->lineEdit->text(),true) );
	}
	else
	{
		currentTab()->sendData(currentTab()->parseCommande(ui->lineEdit->text()) );
	}
	ui->lineEdit->clear();
	ui->lineEdit->setFocus();
}

void RpcChatWindow::tabJoined()
{
	joining=true;
}
void RpcChatWindow::tabJoining()
{
	joining=false;
}

void RpcChatWindow::connecte()
{

    ui->splitter->show();
	Server *server=new Server;
    QTextEdit *textEdit=new QTextEdit;
    ui->hide3->hide();

    ui->tab->addTab(textEdit,"Console/PM");
    ui->tab->setTabToolTip(ui->tab->count()-1,"chat.freenode.net");
    // current tab is now the last, therefore remove all but the last
    for (int i = ui->tab->count(); i > 1; --i) {
       ui->tab->removeTab(0);
    }

    servers.insert("chat.freenode.net",server);

	server->pseudo=ui->editPseudo->text();
    server->server="chat.freenode.net";
    server->port=6667;
	server->affichage=textEdit;
    server->tab=ui->tab;
	server->userList=ui->userView;
	server->parent=this;

	textEdit->setReadOnly(true);

	connect(server, SIGNAL(joinTab()),this, SLOT(tabJoined() ));
	connect(server, SIGNAL(tabJoined()),this, SLOT(tabJoining() ));

    server->connectToHost("chat.freenode.net",6667);

	ui->tab->setCurrentIndex(ui->tab->count()-1);
}

void RpcChatWindow::closeEvent(QCloseEvent *event)
{
	(void) event;

	QMapIterator<QString, Server*> i(servers);

	while(i.hasNext())
	{
		i.next();
		QMapIterator<QString, QTextEdit*> i2(i.value()->conversations);
		while(i2.hasNext())
		{
			i2.next();
            i.value()->sendData("QUIT "+i2.key() + " ");
		}
	}
}
void RpcChatWindow ::setModel(ClientModel *model)
{
    this->model = model;
}


RpcChatWindow::~RpcChatWindow()
{
    delete ui;
    QMapIterator<QString, Server*> i(servers);

    while(i.hasNext())
    {
        i.next();
        QMapIterator<QString, QTextEdit*> i2(i.value()->conversations);
        while(i2.hasNext())
        {
            i2.next();
            i.value()->sendData("QUIT "+i2.key() + " ");
        }
    }
}