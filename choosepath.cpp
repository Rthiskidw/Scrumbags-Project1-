#include "choosepath.h"
#include "ui_choosepath.h"

ChoosePath::ChoosePath(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChoosePath)
{
    ui->setupUi(this);
}

ChoosePath::~ChoosePath()
{
    delete ui;
}