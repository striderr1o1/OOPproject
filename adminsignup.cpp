#include "./classes/admin_classes/adminSignup.h"

AdminSignup::AdminSignup()
{
    NEWUsername = "NULL";
    NEWPass = "123";
}
AdminSignup::AdminSignup(string a, string b)
{
    NEWUsername = a;
    NEWPass = b;
}