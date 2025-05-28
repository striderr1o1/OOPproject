#include "adminSignup.h"

AdminSignup::AdminSignup()
{
    NEWPass = "123";
    NEWUsername = "NULL";
    verification = false;
}
AdminSignup::AdminSignup(string a, string b, Database& database, bool ver)
{
    NEWUsername = a;
    NEWPass = b;
     Db = database;
     verification = ver;
}
bool AdminSignup::startSignup()
{
    cout << "Set Username: ";
    cin >> NEWUsername;
    cout << "Set Password: ";
    cin >> NEWPass;
    if(NEWPass != "123" && NEWUsername != "NULL")
    return true;

    else
    return false;
}
string AdminSignup::getUsername()
{
    return NEWUsername;
}
string AdminSignup::getPassword()
{
    return NEWPass;
}
