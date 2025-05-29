#ifndef adminmenu_h
#define adminmenu_h

#include <iostream>
#include "ADMIN_setMenu.h"
#include "ADMIN_reqVendor.h"
#include "../database.h"
#include <string>
using namespace std;
class adminMenu{
   private:
   ModifyMenu SM;
   VendorRequest Request_vendor;
   
   public:
   adminMenu();
   ModifyMenu getMenuOption();
   VendorRequest getVendorRequest();
   void StartAdminMenu(Customer& c, Database& d, Vendor& v);
    double getTotalSales();
    
   
   
  
};


#endif