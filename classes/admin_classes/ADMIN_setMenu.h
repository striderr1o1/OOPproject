#ifndef Setmenu_h
#define Setmenu_h

#include <iostream>
#include <string>
#include "menuItem.h"
#include <unistd.h>
#include "customer.h"
#include "../database.h"
using namespace std;
class ModifyMenu{
   private:
  MenuItem items[100];
   static int count;
   public:
   ModifyMenu();
   ModifyMenu(MenuItem list[], int count);
   void setMenu(int cnt);
   void displayMenu();
    void removeItem();
void addItem(MenuItem x);
void sendMenutoCustomer(Customer& c);
void sendMenutoDatabase(Database& db);
void getMenufromDatabase(Database& db);
   void start(Customer& c, Database& d);
  //need to change data type to menu items
};


#endif