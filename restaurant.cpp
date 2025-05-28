#include "Restaurant.h"
int Restaurant::customer_count = 0;
 Restaurant::Restaurant(Admin A, Customer Cs[], Vendor v, int cstmr_count)
 {
    ADMIN = A;
    VENDOR = v;
    for(int i = 0; i < cstmr_count; i++)
    {
        CUSTOMERS[i] = Cs[i];
    }
    
 }
  void Restaurant::setAdmin(Admin a)
  {
    ADMIN = a;
  }

   Admin Restaurant::getAdmin()
  {
    return ADMIN;
  }
   void Restaurant::setCustomers(Customer c[], int count)
   {
    for(int i = 0;i < count; i++)
    {
        CUSTOMERS[i] = c[i];
    }
   }
   Customer* Restaurant::getCustomersList()
   {
    return CUSTOMERS;
   }
    void Restaurant::addCustomer(Customer x)
     {
        CUSTOMERS[++customer_count] = x;
        
     }
     void Restaurant::removeCustomer(int index)
     {
        CUSTOMERS[index] = Customer();
        customer_count--;
     }
     void Restaurant::showCustomerName(int index)
     {
       cout << CUSTOMERS[index].getUsername() << endl;
     }
     void Restaurant::setVendor(Vendor v)
     {
        VENDOR = v;
     }
       Vendor Restaurant::getVendor()
       {
        return VENDOR;
       }
