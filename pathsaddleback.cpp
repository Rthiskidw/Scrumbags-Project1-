#include "pathsaddleback.h"
#include "ui_pathsaddleback.h"

pathSaddleback::pathSaddleback(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pathSaddleback)
{
    ui->setupUi(this);
}

pathSaddleback::~pathSaddleback()
{
    delete ui;
}