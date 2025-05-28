#include "adminSignup.h"

AdminSignup::AdminSignup()
{
    cout << "Enter username: "; cin >> NEWUsername;
    cout << "Enter password: "; cin >> NEWPass;
    verification = false;
}
AdminSignup::AdminSignup(string a, string b, Database& database, bool ver)
{
    NEWUsername = a;
    NEWPass = b;
     Db = database;
     verification = ver;
}
