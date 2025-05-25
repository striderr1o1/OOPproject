#include "./classes/signup.h"

 Signup::Signup()
    {
        string filename;
        cout << "Enter database file:";
        cin >> filename;
        NEWUsername = "NULL";
        NEWPass = "123";
        Db = Database(filename);
    }
    Signup::Signup(string un, string pass, Database database)
    {
        NEWUsername = un;
        NEWPass = pass;
        Db = database;
    }