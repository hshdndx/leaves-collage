#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QtGui/QtGui>



namespace Ui {

class LoginWindow;

}

class QLabel;
class QPushButton;
class QTextEdit;

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

public:
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QPushButton *login2Button;
    QTextEdit *usernameEdit;
    QTextEdit *passwordEdit;

signals:

private:
    Ui::LoginWindow *ui1;


public  slots:



};

#endif // LOGINWINDOW_H

