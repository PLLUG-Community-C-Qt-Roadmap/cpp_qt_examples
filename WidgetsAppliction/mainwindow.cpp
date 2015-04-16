#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QCheckBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setGeometry(200, 200, 225, 200);

    mButton = new QPushButton(this);
    mButton->setGeometry(QRect(0, 0, 101, 112));
    mButton->setText("Chek right checkbox!");
    mButton->setCheckable(true);
    mButton->setStyleSheet("background-color: red");

    mCheckbox = new QCheckBox(this);
    mCheckbox->setGeometry(QRect(110, 0, 101, 112));
    mCheckbox->setText("Push left button!");

    QCheckBox *checkboxConnect = new QCheckBox(this);
    checkboxConnect->setGeometry(QRect(0, 110, 101, 112));
    checkboxConnect->setText("Connect!");
    checkboxConnect->setChecked(true);

    connect(checkboxConnect, SIGNAL(toggled(bool)),
            this, SLOT(connectButtonAndCheckbox(bool)));

    connectButtonAndCheckbox(true);
}
/*
****************************************************************************************************
*/
void MainWindow::connectButtonAndCheckbox(bool connect)
{
    if (connect)
    {
        QObject::connect(mButton, SIGNAL(toggled(bool)),
                         mCheckbox, SLOT(setChecked(bool)));
        QObject::connect(mCheckbox, SIGNAL(toggled(bool)),
                         mButton, SLOT(setChecked(bool)));
    }
    else
    {
        QObject::disconnect(mButton, SIGNAL(toggled(bool)),
                            mCheckbox, SLOT(setChecked(bool)));
        QObject::disconnect(mCheckbox, SIGNAL(toggled(bool)),
                            mButton, SLOT(setChecked(bool)));
    }
}
/*
****************************************************************************************************
*/
