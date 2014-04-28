#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QPalette>
#include "regwindow.h"
#include "ui_regwindow.h"

RegisterWindow::RegisterWindow(QWidget *parent) :
    QDialog(parent),
    ui2(new Ui::RegisterWindow)
{
    ui2->setupUi(this);

    setWindowTitle(tr("Register"));



}

RegisterWindow::~RegisterWindow()
{
    delete ui2;
}

