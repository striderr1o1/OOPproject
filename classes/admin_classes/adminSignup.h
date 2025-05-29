#ifndef Adminsignup_h
#define Adminsignup_h


#include <iostream>
#include <string>
#include "../signup.h"
#include <fstream>
#include "../database.h"
using namespace std;
class AdminSignup: public Signup{
    private:
     Database Db;
     bool verification;
    public:
 AdminSignup();
 AdminSignup(string a, string b, Database& database, bool ver);
 bool startSignup();
 string getUsername();
 string getPassword();
 

};

#endif