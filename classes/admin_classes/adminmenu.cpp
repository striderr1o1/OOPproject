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

 void adminMenu::StartAdminMenu()
 {
   int option;
   do{
   system("clear");
   cout << "\n---Admin Menu---";
   cout << "\n1) Modify Customer Menu";
   cout << "\n2) Make Vendor Request";
cout << "\nselect: "; cin >> option;
   switch(option)
   {
      case 1:
      SM.start();
      break;
      case 2:
      Request_vendor.start();
      break;
      default:
      cout << "false";
      
   }
}while(option > 0 && option <=2);

 }