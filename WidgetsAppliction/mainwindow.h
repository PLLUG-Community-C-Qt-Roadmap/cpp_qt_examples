#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class QCheckBox;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

public slots:
    void connectButtonAndCheckbox(bool);

private:
    QPushButton *mButton;
    QCheckBox *mCheckbox;
};

#endif // MAINWINDOW_H
