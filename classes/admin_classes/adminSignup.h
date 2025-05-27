#ifndef Adminsignup_h
#define Adminsignup_h


#include <iostream>
#include <string>
#include "../signup.h"

#include "../database.h"
using namespace std;
class AdminSignup: public Signup{
    private:
     Database Db;
    public:
 AdminSignup();
 AdminSignup(string a, string b, Database database);

};

#endif