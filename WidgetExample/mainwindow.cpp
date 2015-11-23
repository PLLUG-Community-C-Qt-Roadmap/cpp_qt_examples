#include "mainwindow.h"
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

const QString backroundColorStyle {"%1{"
                                   "background-color: %2;"
                                   "}"};

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent),
      mBigRedButton(new QPushButton(tr("Danger button!!! Don't push!!!!"))),
      mBringControlBack(new QCheckBox("Bring me back my red button"))
{
    mBigRedButton->setStyleSheet(backroundColorStyle.arg("QPushButton").arg("red"));
    connect(mBigRedButton, &QPushButton::clicked,
            this, &MainWindow::slotKaboom, Qt::UniqueConnection);

    mBringControlBack->setDisabled(true);
    connect(mBringControlBack, &QCheckBox::clicked,
            this, &MainWindow::slotReturnControl, Qt::UniqueConnection);

    QHBoxLayout *horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(mBigRedButton);
    horizontalLayout->addWidget(mBringControlBack);
    setLayout(horizontalLayout);
}

void MainWindow::slotKaboom()
{
    setStyleSheet(backroundColorStyle.arg("MainWindow").arg("red"));

    mBringControlBack->setEnabled(true);

    mBigRedButton->setDisabled(true);
    mBigRedButton->setText(tr("Oh, NOOOOOOOOOOOOOOOOO!"));
    mBigRedButton->setStyleSheet(backroundColorStyle.arg("QPushButton").arg("white"));

}

void MainWindow::slotReturnControl()
{
    if(!mBigRedButton->isEnabled() && mBringControlBack->isChecked()) {
        setStyleSheet(backroundColorStyle.arg("MainWindow").arg("white"));


        mBigRedButton->setText(tr("Danger button is back!!! Don't push!!!!"));
        mBigRedButton->setStyleSheet(backroundColorStyle.arg("QPushButton").arg("red"));
        mBigRedButton->setEnabled(true);

        mBringControlBack->setChecked(false);
        mBringControlBack->setDisabled(true);
    }
}
