#include "./classes/admin_classes/adminmenu.h"
#include "ADMIN_reqVendor.cpp"
#include "ADMIN_setMenu.cpp"
adminMenu::adminMenu()
{
    SM = ModifyMenu();
    Request_vendor = VendorRequest();
}
 ModifyMenu adminMenu::getMenuOption()
   {
      return SM;
   }
   VendorRequest adminMenu::getVendorRequest()
   {
      return Request_vendor;
   }