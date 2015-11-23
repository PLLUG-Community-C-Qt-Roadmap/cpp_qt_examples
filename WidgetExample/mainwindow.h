#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
class QCheckBox;
class QPushButton;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

public slots:
    void slotKaboom();
    void slotReturnControl();

private:
    QPushButton *mBigRedButton;
    QCheckBox *mBringControlBack;
};

#endif // MAINWINDOW_H
