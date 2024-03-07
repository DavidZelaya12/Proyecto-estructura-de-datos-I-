#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>
#include <user.h>

QT_BEGIN_NAMESPACE
namespace Ui { class cframe; }
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();

    void buscarDocentes(QString username, QString password);
    void buscarCoordinadores(QString username, QString password);
    void buscarIEDD(QString username, QString password);
    void buscarConsultores(QString username, QString password);
    void logout();

private slots:
    void on_Btn_Login_clicked();

    void on_Btn_Logout_clicked();

    void on_Btn_Logout_2_clicked();

    void on_Btn_Logout_3_clicked();

    void on_Btn_Logout_4_clicked();

private:
    Ui::cframe *ui;
    std::vector<user> docentes;
    std::vector<user> coordinadores;
    std::vector<user> IEDDs;
    std::vector<user> consultores;

    bool userFound;
};
#endif // CFRAME_H
