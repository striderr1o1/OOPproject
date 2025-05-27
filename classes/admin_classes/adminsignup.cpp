#include "adminSignup.h"

AdminSignup::AdminSignup()
{
    NEWUsername = "NULL";
    NEWPass = "123";
    cout << "Enter file name: ";
    string filename;
    cin >> filename;
    Db = Database(filename);
}
AdminSignup::AdminSignup(string a, string b, Database database)
{
    NEWUsername = a;
    NEWPass = b;
     Db = database;
}