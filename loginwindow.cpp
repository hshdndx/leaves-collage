#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QPalette>
#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    ui1(new Ui::LoginWindow)
{
    ui1->setupUi(this);

    setWindowTitle(tr("Login"));



}

LoginWindow::~LoginWindow()
{
    delete ui1;
}
