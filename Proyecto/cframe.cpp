#include "cframe.h"
#include "ui_cframe.h"
#include <QMessageBox>
#include <QApplication>
#include <QMainWindow>
using std::string;


cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);

    docentes.push_back(user("erick", "123"));
    docentes.push_back(user("victor", "123"));
    docentes.push_back(user("carlos", "123"));

    coordinadores.push_back(user("carlos", "1234"));

    IEDDs.push_back(user("miguel", "123"));
    IEDDs.push_back(user("daniel", "123"));

    consultores.push_back(user("abraham", "123"));
    consultores.push_back(user("david", "123"));

}

cframe::~cframe()
{
    delete ui;
}

void cframe::buscarDocentes(QString username, QString password)
{
    for (const user& usuario : docentes) {
        if (usuario.getUsername() == username) {
            userFound = true;
            if (usuario.getPassword() == password) {
                ui->tabWidget->setTabEnabled(0, false);
                ui->tabWidget->setTabEnabled(1, true);
                ui->tabWidget->setTabEnabled(2, false);
                ui->tabWidget->setTabEnabled(3, false);
                ui->tabWidget->setTabEnabled(4, false);
                return;
            } else {
                QMessageBox::warning(this, "Error", "Contraseña incorrecta");
                return;
            }
        }
    }
}

void cframe::buscarCoordinadores(QString username, QString password)
{
    for (const user& usuario : coordinadores) {
        if (usuario.getUsername() == username) {
            userFound = true;
            if (usuario.getPassword() == password) {
                ui->tabWidget->setTabEnabled(0, false);
                ui->tabWidget->setTabEnabled(1, false);
                ui->tabWidget->setTabEnabled(2, true);
                ui->tabWidget->setTabEnabled(3, false);
                ui->tabWidget->setTabEnabled(4, false);
                return;
            } else {
                QMessageBox::warning(this, "Error", "Contraseña incorrecta");
                return;
            }
        }
    }
}

void cframe::buscarIEDD(QString username, QString password)
{
    for (const user& usuario : IEDDs) {
        if (usuario.getUsername() == username) {
            userFound = true;
            if (usuario.getPassword() == password) {
                ui->tabWidget->setTabEnabled(0, false);
                ui->tabWidget->setTabEnabled(1, false);
                ui->tabWidget->setTabEnabled(2, false);
                ui->tabWidget->setTabEnabled(3, true);
                ui->tabWidget->setTabEnabled(4, false);
                return;
            } else {
                QMessageBox::warning(this, "Error", "Contraseña incorrecta");
                return;
            }
        }
    }
}

void cframe::buscarConsultores(QString username, QString password)
{
    for (const user& usuario : consultores) {
        if (usuario.getUsername() == username) {
            userFound = true;
            if (usuario.getPassword() == password) {
                ui->tabWidget->setTabEnabled(0, false);
                ui->tabWidget->setTabEnabled(1, false);
                ui->tabWidget->setTabEnabled(2, false);
                ui->tabWidget->setTabEnabled(3, false);
                ui->tabWidget->setTabEnabled(4, true);
                return;
            } else {
                QMessageBox::warning(this, "Error", "Contraseña incorrecta");
                return;
            }
        }
    }
}

void cframe::logout()
{
    ui->LE_Username->clear();
    ui->LE_Password->clear();
    ui->tabWidget->setTabEnabled(0, true);
    ui->tabWidget->setTabEnabled(1, false);
    ui->tabWidget->setTabEnabled(2, false);
    ui->tabWidget->setTabEnabled(3, false);
    ui->tabWidget->setTabEnabled(4, false);
}

void cframe::mostrarImagen(string ruta)
{
    QPixmap pixmap(ruta.c_str());
    if (pixmap.isNull()) {
        QMessageBox::warning(this, "Error", ruta.c_str());
        return;
    }

    ui->imageLabel->setPixmap(pixmap);
    ui->imageLabel->setScaledContents(true);
}

void cframe::on_Btn_Login_clicked()
{
    QString username = ui->LE_Username->text().toLower();
    QString password = ui->LE_Password->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Llenar todos los campos");
        return;
    }

    userFound = false;

    if (ui->comboBox_tipo_usuario->currentIndex() == 0) {
        buscarDocentes(username, password);
        mostrarImagen("silabo.jpg");
    } else if (ui->comboBox_tipo_usuario->currentIndex() == 1){
        buscarCoordinadores(username, password);
    } else if (ui->comboBox_tipo_usuario->currentIndex() == 2){
        buscarIEDD(username, password);
    } else if (ui->comboBox_tipo_usuario->currentIndex() == 3){
        buscarConsultores(username, password);
    }

    if (!userFound) {
        QMessageBox::warning(this, "Error", "Usuario incorrecto");
    }
}

void cframe::on_Btn_Logout_clicked()
{
    logout();
}


void cframe::on_Btn_Logout_2_clicked()
{
    logout();
}


void cframe::on_Btn_Logout_3_clicked()
{
    logout();
}


void cframe::on_Btn_Logout_4_clicked()
{
    logout();
}
