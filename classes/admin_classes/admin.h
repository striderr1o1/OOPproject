#ifndef admin_H
#define admin_H


#include <iostream>
#include <string>
#include "/home/ranger/Desktop/tech/OOP/project_2/classes/person.h"
#include "adminmenu.h"
#include "adminSignup.h"

using namespace std;

/*
Admin---
       |-Login/Signup
       |-adminmenu.h
              |-Admin_setMenu.h
              |-Admin_reqVendor.h
*/
class Admin : public Person{
    private:

    static int id;
    AdminSignup signup_admin;
    adminMenu MainMenu;

    protected:

    public:
    Admin();
    Admin(string UN, string pass, AdminSignup s, adminMenu AM);
    string getUsername();
    string getPass();
    void setUsername(string x);
    void setPassword(string p);
    int getID();
    AdminSignup getSignup();
    adminMenu getMainMenu();
    void setSignup(AdminSignup x);
    void setMainMenu(adminMenu x);
    virtual ~Admin();
    //lol
    

    
};

#endif