#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _dbLayer = std::make_unique<DataAccessLayer>("data.txt");

    // _dbLayer.reset(new DataAccessLayer('data.txt'))
    _model = new ProductListModel(nullptr);

    ui->treeView->setModel(_model);

    auto pred = [](Product prod) { return prod.price() < 13; };

    _model->ResetModel( _dbLayer->readProducts(pred) );

    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::removeClicked()
{
    int index = ui->treeView->currentIndex().row();
    if(index < 0)
        return;

    auto product = _model->removeProduct(index);

    auto undoFunction = [=]() {
        _model->insertProduct(index, product);
    };

    _undoStack.push(undoFunction);
}

void MainWindow::undoClicked()
{
    if(!_undoStack.empty())
    {
        _undoStack.top()();
        _undoStack.pop();
    }
}

void MainWindow::init()
{
    connect(ui->removeButton, &QPushButton::clicked,
            this, &MainWindow::removeClicked);
    connect(ui->undoButton, &QPushButton::clicked,
            this, &MainWindow::undoClicked);
}
