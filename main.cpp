#include <iostream>
#include "classes/admin_classes/admin.h"
#include "../Restaurant.h"
using namespace std;
int main()
{
    Database rdb;
    //rdb.executestatment("CREATE TABLE Menu (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT NOT NULL, price REAL NOT NULL)");
    Restaurant RMS;
    Admin A1;
    Vendor V1;
Customer* customers = new Customer[100]; 
    RMS.setAdmin(A1);
    RMS.setVendor(V1);
   
    Customer C1;
    RMS.addCustomer(C1);
    int option;
    

    do{
    system("clear");
   cout << "Welcome to Restaurant Management System" << endl;
   cout << "\n1) Admin";
   cout << "\n2) Customer";
   cout << "\n3) Vendor";
   cout << "\n0 to quit";
   cout << "\nSelect Option:";
   
   cin >> option;
   switch(option)
   {
    case 1:
    A1.startAdmin(C1,rdb);
    break;
    case 2:
    C1.start(rdb);
    break;
    case 3:
    //vendor.start()
    default:
    cout << "GOODbye";
   }
}while(option!=0);
}