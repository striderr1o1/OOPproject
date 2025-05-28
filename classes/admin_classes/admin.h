#ifndef admin_H
#define admin_H


#include <iostream>
#include <string>
#include "../person.h"
#include "adminmenu.h"
#include "adminSignup.h"
#include "adminLogin.h"

using namespace std;

/*
Admin---
       |-Login/Signup
       |-adminmenu.h
              |-Admin_setMenu.h
              |-Admin_reqVendor.h
*/
class Admin : public Person
{
    private:

    static int id;
    AdminSignup signup_admin;
    adminMenu MainMenu;
    AdminLogin Login_admin;
    protected:

    public:
    Admin();
    Admin(string UN, string pass, AdminSignup& s, adminMenu& AM, AdminLogin& AL);
    string getUsername();
    string getPass();
    void setUsername(string x);
    void setPassword(string p);
    int getID();
    AdminSignup getSignup();
    adminMenu getMainMenu();
    AdminLogin getLogin();
    void setSignup(AdminSignup& x);
    void setMainMenu(adminMenu& x);
    void startAdmin();
    //lol
    

    
};

#endif