#include <QMainWindow>
#include <QTcpSocket>
  
#include "ui_ChatWindow.h"

class ChatWindow : public QMainWindow, public Ui::ChatWindow
{
    Q_OBJECT

    public:

        ChatWindow(QWidget *parent=0);

    private slots:

        void on_loginButton_clicked();

        void on_sayButton_clicked();

        void readyRead();

        void connected();

    private:

        QTcpSocket *socket;
};