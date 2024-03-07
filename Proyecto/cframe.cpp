#include "cframe.h"
#include "ui_cframe.h"
#include <QMessageBox>
cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);

    users.push_back(user("david", "123"));
    users.push_back(user("miguel", "123"));
    users.push_back(user("daniel", "123"));
    users.push_back(user("abraham", "123"));
    users.push_back(user("josue", "123"));
}

cframe::~cframe()
{
    delete ui;
}

void cframe::on_Btn_Login_clicked()
{
    QString username = ui->LE_Username->text().toLower();
    QString password = ui->LE_Password->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Llenar todos los campos");
        return;
    }

    bool userFound = false;
    for (const user& usuario : users) {
        if (usuario.getUsername() == username) {
            userFound = true;
            if (usuario.getPassword() == password) {
                ui->tabWidget->setTabEnabled(0, false);
                ui->tabWidget->setTabEnabled(1, true);
                return;
            } else {
                QMessageBox::warning(this, "Error", "Contraseña incorrecta");
                return;
            }
        }
    }

    if (!userFound) {
        QMessageBox::warning(this, "Error", "Usuario incorrecto");
    }
}


void cframe::on_Btn_Logout_clicked()
{
    ui->LE_Username->clear();
    ui->LE_Password->clear();
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
}

