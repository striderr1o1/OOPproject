#ifndef restaurant_H
#define restaurant_H

#include <iostream>
#include <string>
#include "admin.h"
#include "customer.h"
#include "vendor.h"
using namespace std;
class Restaurant{
    private:
    Admin ADMIN;
    Customer CUSTOMERS[100];
    Vendor VENDOR;
    static int customer_count;
   public:
   Restaurant();
   Restaurant(Admin A, Customer Cs[], Vendor v, int cstmr_count);
   void setAdmin(Admin a);
   Admin getAdmin();
   void setCustomers(Customer c[], int count);
   Customer* getCustomersList();
   void addCustomer(Customer x);
   void removeCustomer(int index);
   void showCustomerName(int index);
   void setVendor(Vendor v);
   Vendor getVendor();
   //get ADMIN;
   //add Customer;
   //remove Customer;
   //display Customers;
   //get Vendor;
   //
};
#endif