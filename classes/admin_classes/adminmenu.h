#ifndef adminmenu_h
#define adminmenu_h

#include <iostream>
#include "ADMIN_setMenu.h"
#include "ADMIN_reqVendor.h"
#include <string>
using namespace std;
class adminMenu{
   private:
   SetMenu SM;
   VendorRequest Request_vendor;
   
   public:
   adminMenu();
   SetMenu getMenuOption();
   VendorRequest getVendorRequest();
   
   
   
  
};


#endif