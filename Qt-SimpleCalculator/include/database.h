#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QDialog>
#include <QFileInfo>
#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class database;
}

class database : public QDialog
{
    Q_OBJECT
public:
     QSqlDatabase sqlitedb;

    void connClose()
    {
        sqlitedb.close();
        sqlitedb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
       sqlitedb.setDatabaseName("C:/Users/C PC/Desktop/final/Calculator/Qt-SimpleCalculator/asset/calculatordatabase.sqlite");
       if(!sqlitedb.open()){
          qDebug()<<("Failed to open databsae");
          return false;
       }
       else{
           qDebug()<<("Connected........");
           return true;
       }
    }


public:
    explicit database(QWidget *parent = nullptr);
    ~database();

private:
    Ui::database *ui;
};

#endif // DATABASE_H
