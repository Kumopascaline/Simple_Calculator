/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QRadioButton *radioButtonSimple;
    QRadioButton *radioButtonCompl;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(406, 262);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        radioButtonSimple = new QRadioButton(centralWidget);
        radioButtonSimple->setObjectName(QString::fromUtf8("radioButtonSimple"));
        radioButtonSimple->setGeometry(QRect(0, 10, 121, 22));
        radioButtonCompl = new QRadioButton(centralWidget);
        radioButtonCompl->setObjectName(QString::fromUtf8("radioButtonCompl"));
        radioButtonCompl->setGeometry(QRect(0, 30, 105, 22));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 70, 301, 191));
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(lineEdit, radioButtonSimple);
        QWidget::setTabOrder(radioButtonSimple, radioButtonCompl);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        radioButtonSimple->setText(QApplication::translate("MainWindow", "Elementary mode", nullptr));
        radioButtonCompl->setText(QApplication::translate("MainWindow", "Engineering mode", nullptr));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
