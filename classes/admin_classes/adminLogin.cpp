#include "adminLogin.h"

AdminLogin::AdminLogin()
{
    username = "null";
    password = "123";
}
AdminLogin::AdminLogin(string u, string pass)
{
    username = u;
    password = pass;
}
bool AdminLogin::startLogin( Database& db)
{
cout << "Username: ";
cin >> username;
cout << "Password: ";
cin >> password;
string fileUsername;
string filePassword;
fstream signupFile;
signupFile.open("adminData.txt", ios::in);

    if(signupFile.is_open())
    {
        while(signupFile >> fileUsername >> filePassword)
        {
            if(username == fileUsername && password == filePassword)
              {
                  
                  return true;
                  break;
              }
            
        }
        return false;
    }
    

// if(username == signup.getUsername() && password == signup.getPassword())
// {
//     cout << signup.getUsername();
//     return true;
// }
// else{
//     cout << signup.getUsername();
// return false;
// }
else
    {
        cout << "File not opened: ";
        return false;
    }
}
