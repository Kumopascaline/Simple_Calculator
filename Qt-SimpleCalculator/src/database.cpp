#include "include\database.h"
#include "ui_database.h"
#include "include\mainwindow.h"

database::database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::database)
{
    ui->setupUi(this);

    if(!connOpen()){

    }
    else{


    }
}

database::~database()
{
    delete ui;
}
