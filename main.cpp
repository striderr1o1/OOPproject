#include <iostream>
#include "classes/admin_classes/admin.h"
#include "../Restaurant.h"
using namespace std;
int main()
{
   // db->executestatment("CREATE TABLE IF NOT EXISTS customers (id INTEGER, name TEXT, username TEXT, password TEXT)");
    Restaurant RMS;
    Admin A1;
    Vendor V1;
Customer* customers = new Customer[100]; 
    RMS.setAdmin(A1);
    RMS.setVendor(V1);
  
   cout << "Welcome to Restaurant Management System" << endl;
   cout << "\n1) Admin";
   cout << "\n1) Customer";
   cout << "\n1) Vendor";
   cout << "\nSelect Option:";
   int option;
   cin >> option;
   switch(option)
   {
    case 1:
    A1.startAdmin();
    break;
    case 2:
    //Customer.start()
    case 3:
    //vendor.start()
    default:
    cout << "GOODbye";
   }

}