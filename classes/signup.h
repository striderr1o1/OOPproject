#ifndef signup_h
#define signup_h


#include <iostream>
#include <string>
#include "database.h"
#include "sqlite3.h"
using namespace std;
class Signup{
    private:
    protected:
    string NEWUsername;
    string NEWPass;
   
    public:
    Signup();
    Signup(string un, string pass);
    

};

#endif