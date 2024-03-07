/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cframe
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *LoginTab;
    QLabel *label;
    QLineEdit *LE_Username;
    QLabel *label_2;
    QLineEdit *LE_Password;
    QPushButton *Btn_Login;
    QLabel *label_4;
    QWidget *DocenteTab;
    QLabel *label_3;
    QPushButton *Btn_Logout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cframe)
    {
        if (cframe->objectName().isEmpty())
            cframe->setObjectName(QString::fromUtf8("cframe"));
        cframe->resize(876, 691);
        centralwidget = new QWidget(cframe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        LoginTab = new QWidget();
        LoginTab->setObjectName(QString::fromUtf8("LoginTab"));
        label = new QLabel(LoginTab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 280, 171, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        LE_Username = new QLineEdit(LoginTab);
        LE_Username->setObjectName(QString::fromUtf8("LE_Username"));
        LE_Username->setGeometry(QRect(380, 180, 291, 41));
        LE_Username->setFont(font);
        label_2 = new QLabel(LoginTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 190, 161, 31));
        label_2->setFont(font);
        LE_Password = new QLineEdit(LoginTab);
        LE_Password->setObjectName(QString::fromUtf8("LE_Password"));
        LE_Password->setGeometry(QRect(380, 270, 291, 41));
        LE_Password->setFont(font);
        LE_Password->setEchoMode(QLineEdit::Password);
        Btn_Login = new QPushButton(LoginTab);
        Btn_Login->setObjectName(QString::fromUtf8("Btn_Login"));
        Btn_Login->setGeometry(QRect(320, 350, 211, 51));
        Btn_Login->setFont(font);
        Btn_Login->setAutoFillBackground(false);
        label_4 = new QLabel(LoginTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 30, 131, 71));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        tabWidget->addTab(LoginTab, QString());
        DocenteTab = new QWidget();
        DocenteTab->setObjectName(QString::fromUtf8("DocenteTab"));
        label_3 = new QLabel(DocenteTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 30, 171, 61));
        QFont font2;
        font2.setPointSize(18);
        label_3->setFont(font2);
        Btn_Logout = new QPushButton(DocenteTab);
        Btn_Logout->setObjectName(QString::fromUtf8("Btn_Logout"));
        Btn_Logout->setGeometry(QRect(320, 480, 181, 51));
        Btn_Logout->setFont(font);
        tabWidget->addTab(DocenteTab, QString());

        verticalLayout->addWidget(tabWidget);

        cframe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cframe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 876, 25));
        cframe->setMenuBar(menubar);
        statusbar = new QStatusBar(cframe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cframe->setStatusBar(statusbar);

        retranslateUi(cframe);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cframe);
    } // setupUi

    void retranslateUi(QMainWindow *cframe)
    {
        cframe->setWindowTitle(QApplication::translate("cframe", "cframe", nullptr));
        label->setText(QApplication::translate("cframe", "Contrase\303\261a:", nullptr));
        label_2->setText(QApplication::translate("cframe", "Usuario:", nullptr));
        Btn_Login->setText(QApplication::translate("cframe", "Iniciar Sesion", nullptr));
        label_4->setText(QApplication::translate("cframe", "LOGIN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(LoginTab), QApplication::translate("cframe", "Login", nullptr));
        label_3->setText(QApplication::translate("cframe", "Docente", nullptr));
        Btn_Logout->setText(QApplication::translate("cframe", "Logout", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DocenteTab), QApplication::translate("cframe", "Docente", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cframe: public Ui_cframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
