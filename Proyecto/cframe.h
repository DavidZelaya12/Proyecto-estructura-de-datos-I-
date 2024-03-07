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

private slots:
    void on_Btn_Login_clicked();

    void on_Btn_Logout_clicked();


private:
    Ui::cframe *ui;
    std::vector<user> users;
};
#endif // CFRAME_H
