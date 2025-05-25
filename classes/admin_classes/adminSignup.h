#ifndef Adminsignup_h
#define Adminsignup_h


#include <iostream>
#include <string>
#include "./classes/signup.h"
#include "/home/ranger/Desktop/tech/OOP/project_2/signup.cpp"
using namespace std;
class AdminSignup: public Signup{
    private:
    
    public:
 AdminSignup();
 AdminSignup(string a, string b);

};

#endif