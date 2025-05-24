#ifndef admin_H
#define admin_H


#include <iostream>
#include <string>
#include "/home/ranger/Desktop/tech/OOP/project_2/classes/person.h"
#include "adminmenu.h"
#include "/home/ranger/Desktop/tech/OOP/project_2/classes/signup.h"

using namespace std;
class Admin : public Person{
    private:

    static int id;
    Signup signup_admin;
    adminMenu MainMenu;

    protected:

    public:
    Admin();
    Admin(string UN, string pass, Signup s, adminMenu AM);
    string getUsername();
    string getPass();
    void setUsername(string x);
    void setPassword(string p);
    int getID();
    Signup getSignup();
    adminMenu getMainMenu();
    virtual ~Admin();
    //lol
    

    
};

#endif