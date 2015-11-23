#include "mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      mBigRedButton(new QPushButton("Danger button!!! Don't do this!!!!", this))
{
    resize(500, 500);

    mBigRedButton->setStyleSheet("QPushButton{"
                                 "background-color: red;"
                                 "}");

    auto buttonSize = QSize(200, 100);

    auto windowCenterPoint = geometry().center();

    mBigRedButton->setGeometry(windowCenterPoint.x() - buttonSize.width() / 2,
                               windowCenterPoint.y() - buttonSize.height() / 2,
                               buttonSize.width(), buttonSize.height());

    connect(mBigRedButton, &QPushButton::clicked,
            this, &MainWindow::slotKaboom, Qt::UniqueConnection);
}

void MainWindow::slotKaboom()
{
    setStyleSheet("QMainWindow{"
                  "background-color: red;"
                  "}");

    mBigRedButton->setDisabled(true);
    mBigRedButton->setText("Oh, NOOOOOOOOOOOOOOOOO!");    
    mBigRedButton->setStyleSheet("QPushButton{"
                                 "background-color: white;"
                                 "}");

}
