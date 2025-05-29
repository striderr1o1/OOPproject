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
      double adminMenu::getTotalSales()
{
	double total= 0;
	double temp;
	fstream salesFile("sales.txt", ios::in);
	try{
	if(salesFile.is_open())
	{
		while(salesFile >> temp){
		total+=temp;}
		salesFile.close();
		
	}return total;
}catch(exception& e){
	cout << "Error occured in opening file: " << e.what() << endl;
   return 0;
}
}


 void adminMenu::StartAdminMenu(Customer& c, Database& d, Vendor& v)
 {
   int option;
   double sales;
   do{
   system("clear");
   cout << "\n---Admin Menu---";
   cout << "\n1) Modify Customer Menu";
   cout << "\n2) Make Vendor Request";
   cout << "\n3) total Sales";
   cout << "\n0 to go back";
cout << "\nselect: "; cin >> option;
   switch(option)
   {
      case 1:
      SM.start(c, d);
      break;
      case 2:
      Request_vendor.start(v);
      break;
      case 3:
      sales = getTotalSales();
      cout << "sales: " << sales << endl;
      sleep(2);
      break;
      default:
      cout << "false";
      sleep(1);
      system("clear");
      
   }
}while(option!= 0);

 }