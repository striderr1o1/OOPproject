#ifndef Setmenu_h
#define Setmenu_h

#include <iostream>
#include <string>
using namespace std;
class SetMenu{
   private:
   string products[10];
   int prices[10];
   public:
   SetMenu();
   void setMenu();
   void displayMenu();
   string* getProducts();
   int* getPrices();
   void setProducts();
   void setPrices();
  
};


#endif