#ifndef signup_h
#define signup_h


#include <iostream>
#include <string>
#include "./classes/database.h"
using namespace std;
class Signup{
    private:
    protected:
    string NEWUsername;
    string NEWPass;
    Database Db;
    public:
    Signup();
    Signup(string un, string pass, Database database);
    

};

#endif