#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <stack>


#include "dataaccesslayer.h"
#include "productlistmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void removeClicked();
    void undoClicked();
    void init();

private:
    typedef std::function<void()> UndoAction;

    Ui::MainWindow *ui;
    std::unique_ptr<DataAccessLayer> _dbLayer;
    ProductListModel *_model;
    std::stack<UndoAction> _undoStack;
};

#endif // MAINWINDOW_H
