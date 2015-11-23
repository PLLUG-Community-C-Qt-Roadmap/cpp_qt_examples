#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
class QCheckBox;
class QLineEdit;
class QComboBox;
class QPushButton;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

public slots:
    void slotKaboom();
    void slotReturnControl();
    void slotChangeButtonText(const QString &newText);
    void slotChangeBackgroundColor(const QString &newColor);

private:
    QPushButton *mPushButton;
    QCheckBox *mCheckBox;
    QLineEdit *mLineEdit;
    QComboBox *mComboBox;
};

#endif // MAINWINDOW_H
