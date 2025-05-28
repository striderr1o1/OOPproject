#include "adminmenu.h"
#include "ADMIN_reqVendor.cpp"
#include "ADMIN_setMenu.cpp"
adminMenu::adminMenu()
{
    
}
 ModifyMenu adminMenu::getMenuOption()
   {
      return SM;
   }
   VendorRequest adminMenu::getVendorRequest()
   {
      return Request_vendor;
   }