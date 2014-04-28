#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDialog>
#include <QtGui/QtGui>
#include <QUrl>
#include <QDesktopServices>

class QLabel;
class QPushButton;
class QUrl;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    QLabel *label;
    QPushButton *loginButton;
    QPushButton *regButton;
    QPushButton *findButton;
    QPushButton *jigsawButton;
    QPushButton *closeButton;

//    QUrl *url;

signals:
    void on_pushButton_3_clicked();
    void on_findButton_clicked();
    void on_loginButton_clicked();
    void on_regButton_clicked();
//    void findleaves();
//    void jigsaw();

private:
    Ui::MainWindow *ui;


public  slots:
//   void loginClicked();
//   void regClicked();
//   void leaveClicked();
//   void jigsawClicked();
//     bool QDesktopServices::openUrl ( const QUrl & url );
    bool openwebpage();
    void createDialog1();
    void createDialog2();
};

#endif // MAINWINDOW_H
