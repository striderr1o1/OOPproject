#ifndef Setmenu_h
#define Setmenu_h

#include <iostream>
#include <string>
using namespace std;
class ModifyMenu{
   private:
   string products[10];
   int prices[10];
   public:
   ModifyMenu();
   void setMenu();
   void displayMenu();
   string* getProducts();
   int* getPrices();
   void setProducts();
   void setPrices();
  
};


#endif