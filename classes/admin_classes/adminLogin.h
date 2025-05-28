#ifndef Adminlogin_h
#define Adminlogin_h


#include <iostream>
#include <string>
#include "../signup.h"
#include "adminSignup.h"
#include "../database.h"
using namespace std;
class AdminLogin{
    private:
     Database Db;
     string username;
     string password;
    public:
    AdminLogin();
    AdminLogin(string u, string pass);
    bool startLogin(AdminSignup signup);
 
 

};

#endif