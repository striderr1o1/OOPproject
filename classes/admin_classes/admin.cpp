#include "admin.h"

int Admin::id = 0;
    Admin::Admin()
    {
        username = "NULL";
        password = "123";
        id++;
        
    }
    Admin::Admin(string UN, string pass, AdminSignup& s, adminMenu& AM, AdminLogin& AL)
    {
        username = UN;
        password = pass;
        id++;
        signup_admin = s;
        MainMenu = AM;
        Login_admin = AL;
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
     AdminLogin Admin::getLogin()
     {
        return Login_admin;
     }
     adminMenu Admin::getMainMenu()
     {
        return MainMenu;
     }
     void Admin::setSignup(AdminSignup& x)
     {
        signup_admin = x;
     }
    void Admin::setMainMenu(adminMenu& x)
    {
        MainMenu = x;
    }

    void Admin::startAdmin(Customer& c, Database& db)
    {
        bool correct = false;
        bool signup = false;
        bool login = false;
       
        do{
            system("clear");
        cout << "1. Login\n";
        cout << "2. Signup\n";
        int option;
        cout << "option: ";
        cin >> option;
        switch(option)
        {
            case 1://first signup then login
            if(signup == true)
            {
                login = Login_admin.startLogin(signup_admin,db);
                if(login == true){
                cout << "\nSuccessfully logged in as " << signup_admin.getUsername() << endl;
                correct = true;
                if(correct == true)
                {//if login successful
                    MainMenu.StartAdminMenu(c, db);
                }
                }
                else{
                cout << "\nFailed to login.";
                correct = false;
            }
            }
            else
            cout << "\nSign up first.";
            break;

            case 2://signup
                signup = signup_admin.startSignup();
            break;

            default:
            break;
        }
    }while(correct == false);
    }
     
