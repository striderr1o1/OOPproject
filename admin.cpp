#include "./classes/admin_classes/admin.h"
#include <iostream>
using namespace std;
int Admin::id = 0;
    Admin::Admin()
    {
        username = "NULL";
        password = "123";
        id++;
        signup_admin = AdminSignup();
        MainMenu = adminMenu();
    }
    Admin::Admin(string UN, string pass, AdminSignup s, adminMenu AM)
    {
        username = UN;
        password = pass;
        id++;
        signup_admin = s;
        MainMenu = AM;
    }
    string Admin::getUsername()
    {
        return username;
    }
    string Admin::getPass()
    {
        return password;
    }
    void Admin::setUsername(string x)
    {
        username = x;
    }
    void Admin::setPassword(string p)
    {
        password = p;
    }
    int Admin::getID()
    {
        return id;
    }
    AdminSignup Admin::getSignup()
     {
        return signup_admin;
     }
     adminMenu Admin::getMainMenu()
     {
        return MainMenu;
     }
     void Admin::setSignup(AdminSignup x)
     {
        signup_admin = x;
     }
    void Admin::setMainMenu(adminMenu x)
    {
        MainMenu = x;
    }
     Admin::~Admin()
     {
        username = "null";
        password = "123";
       
     }
