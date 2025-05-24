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
    
    virtual string getUsername() = 0;
};
#endif