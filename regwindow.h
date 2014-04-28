#ifndef REGWINDOW_H
#define REGWINDOW_H



#include <QDialog>
#include <QtGui/QtGui>



namespace Ui {

class RegisterWindow;

}

class QLabel;
class QPushButton;
class QTextEdit;

class RegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = 0);
    ~RegisterWindow();

public:
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QPushButton *registerButton;
    QTextEdit *usernameEdit;
    QTextEdit *passwordEdit;

signals:

private:
    Ui::RegisterWindow *ui2;


public  slots:



};

#endif // REGWINDOW_H
