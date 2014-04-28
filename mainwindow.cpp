#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QPalette>
#include "loginwindow.h"
#include "regwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Welcome"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*QUrl::QUrl ( const QString & url )
{
     url = new QUrl(QString("http://wendycan.org"));
}

QUrl::~QUrl ()
{
    delete url;
}*/

bool MainWindow::openwebpage()
{
  QDesktopServices::openUrl(QUrl(QLatin1String("http://wendycan.org")));
}

void MainWindow::createDialog1()
{
     LoginWindow *signdialog= new LoginWindow;
     signdialog->show();
}

void MainWindow::createDialog2()
{
    RegisterWindow *regdialog = new RegisterWindow;
    regdialog->show();

}
