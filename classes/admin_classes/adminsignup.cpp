#include "adminSignup.h"

AdminSignup::AdminSignup()
{
    NEWPass = "123";
    NEWUsername = "NULL";
    verification = false;
}
AdminSignup::AdminSignup(string a, string b, Database& database, bool ver)
{
    NEWUsername = a;
    NEWPass = b;
     Db = database;
     verification = ver;
}
bool AdminSignup::startSignup()
{
    fstream signupFile;

    cout << "Set Username: ";
    cin >> NEWUsername;
    cout << "Set Password: ";
    cin >> NEWPass;
    string checkUser;
    string checkPass;
    if(NEWPass != "123" && NEWUsername != "NULL"){
        signupFile.open("adminData.txt", ios::in);
        if(signupFile.is_open() == true)
        {
            while(signupFile >> checkUser >> checkPass){
                if(checkUser == NEWUsername || checkPass == NEWPass){
                cout << "\nThis username or password is already taken.";
                signupFile.close();
                return false;
                }
            }
                
                    signupFile.close();
                     signupFile.open("adminData.txt", ios::app);
                     if(signupFile.is_open())
                     {
                        signupFile << NEWUsername << " " << NEWPass << endl;
                signupFile.close();
                return true;
                     }
                     else
                     {
                        cout << "Couldnt open.";
                        return false;
                     }
                
                
            }
            return true;
            
        }
        else
        {
            cout << "Couldn't open file.";
            return false;
        }
    }
 
string AdminSignup::getUsername()
{
    return NEWUsername;
}
string AdminSignup::getPassword()
{
    return NEWPass;
}
