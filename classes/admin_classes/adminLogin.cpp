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
bool AdminLogin::startLogin(AdminSignup signup)
{
cout << "Username: ";
cin >> username;
cout << "Password: ";
cin >> password;
if(username == signup.getUsername() && password == signup.getPassword())
{
    cout << signup.getUsername();
    return true;
}
else{
    cout << signup.getUsername();
return false;
}
}
