#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;
class Person{
    private:
    protected:
    string username;
    string password;
    
    public:
    Person();
    virtual string getPass();
    virtual string getUsername();
    virtual void setUsername(string x);
    virtual void setPassword(string p);
};
#endif