#include "mainwindow.h"
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QComboBox>
#include <QLabel>

const QString backroundColorStyle {"%1{"
                                   "background-color: %2;"
                                   "}"};

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent),
      mPushButton(new QPushButton(tr("Danger button!!! Don't push!!!!"))),
      mCheckBox(new QCheckBox("Bring me back my red button")),
      mLineEdit(new QLineEdit(tr("Enter new button name here..."))),
      mComboBox(new QComboBox())
{
    mPushButton->setStyleSheet(backroundColorStyle.arg("QPushButton").arg("red"));
    connect(mPushButton, &QPushButton::clicked,
            this, &MainWindow::slotKaboom, Qt::UniqueConnection);

    mCheckBox->setDisabled(true);
    connect(mCheckBox, &QCheckBox::clicked,
            this, &MainWindow::slotReturnControl, Qt::UniqueConnection);

    connect(mLineEdit, &QLineEdit::textEdited,
            this, &MainWindow::slotChangeButtonText, Qt::UniqueConnection);

    mComboBox->insertItem(0, "skyblue");
    mComboBox->insertItem(1, "yellow");
    mComboBox->insertItem(2, "green");
    mComboBox->insertItem(3, "pink");
    mComboBox->insertItem(4, "orange");
    setStyleSheet(backroundColorStyle.arg("MainWindow").arg(mComboBox->currentText()));
    connect(mComboBox, &QComboBox::currentTextChanged,
            this, &MainWindow::slotChangeBackgroundColor, Qt::UniqueConnection);



    QHBoxLayout *horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(mPushButton);
    horizontalLayout->addWidget(mCheckBox);
    horizontalLayout->addStretch();

    QHBoxLayout *horizontalLayout2 = new QHBoxLayout;
    horizontalLayout2->addWidget(new QLabel("Window background:"));
    horizontalLayout2->addWidget(mComboBox);

    QVBoxLayout *verticalLayout = new QVBoxLayout;
    verticalLayout->addLayout(horizontalLayout);
    verticalLayout->addWidget(mLineEdit);
    verticalLayout->addLayout(horizontalLayout2);

    setLayout(verticalLayout);
}

void MainWindow::slotKaboom()
{
    setStyleSheet(backroundColorStyle.arg("MainWindow").arg("red"));

    mPushButton->setDisabled(true);
    mPushButton->setText(tr("Oh, NOOOOOOOOOOOOOOOOO!"));
    mPushButton->setStyleSheet(backroundColorStyle.arg("QPushButton").arg("white"));

    mLineEdit->setDisabled(true);

    mCheckBox->setEnabled(true);
}

void MainWindow::slotReturnControl()
{
    if(!mPushButton->isEnabled() && mCheckBox->isChecked())
    {
        setStyleSheet(backroundColorStyle.arg("MainWindow").arg("white"));


        mPushButton->setText(tr("Danger button is back!!! Don't push!!!!"));
        mPushButton->setStyleSheet(backroundColorStyle.arg("QPushButton").arg("red"));
        mPushButton->setEnabled(true);

        mLineEdit->setEnabled(true);

        mCheckBox->setChecked(false);
        mCheckBox->setDisabled(true);
    }
}

void MainWindow::slotChangeButtonText(const QString& newText)
{
    if(mPushButton->isEnabled())
    {
        mPushButton->setText(newText);
    }
}

void MainWindow::slotChangeBackgroundColor(const QString &newColor)
{
    setStyleSheet(backroundColorStyle.arg("MainWindow").arg(newColor));
}
