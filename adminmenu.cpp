#include "./classes/admin_classes/adminmenu.h"
#include "ADMIN_reqVendor.cpp"
#include "ADMIN_setMenu.cpp"
adminMenu::adminMenu()
{
    SM = SetMenu();
    Request_vendor = VendorRequest();
}
 SetMenu adminMenu::getMenuOption()
   {
      return SM;
   }
   VendorRequest adminMenu::getVendorRequest()
   {
      return Request_vendor;
   }