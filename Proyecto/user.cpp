#include "user.h"

user::user(const QString& usuario, const QString& contrasena)
    : username(usuario), password(contrasena){}

QString user::getUsername() const
{
    return username;
}

QString user::getPassword() const
{
    return password;
}
