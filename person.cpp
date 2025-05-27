#include "person.h"

     Person::Person()
    {
        username = "NULL";
        password = "123";
    }

void Person::setUsername(string x)
        {
username = x;
        }
void Person::setPassword(string p)
     {
password = p;
     }
    string Person::getUsername()
    {
        return username;
    }
    string Person::getPass()
    {
        return password;
    }