#ifndef Setmenu_h
#define Setmenu_h

#include <iostream>
#include <string>
#include "menuItem.h"
#include <unistd.h>
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
    void removeItem(int index);
void addItem(MenuItem x);


   void start();
  //need to change data type to menu items
};


#endif