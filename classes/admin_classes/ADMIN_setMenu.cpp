#include "ADMIN_setMenu.h"

   ModifyMenu::ModifyMenu()
   {
    for(int i = 0; i < 10;i++)
    {
        products[i] = "null";
        prices[i] = 0;
    }
   }
   void ModifyMenu::setMenu()
   {
    for(int i = 0; i < 10;i++)
    {
        cout << "Product " << i+1 <<": "; cin >> products[i];
        cout << "Price: "; cin >> prices[i];
    }
   }
   void ModifyMenu::displayMenu()
   {
for(int i = 0; i < 10;i++)
    {
        cout << "Product " << i+1 <<": " << products[i];
        cout << "Price: " << prices[i] << endl;
    }
   }
   string* ModifyMenu::getProducts()
   {
    return products;
   }
   int* ModifyMenu::getPrices()
   {
    return prices;
   }
   void ModifyMenu::setProducts()
   {
    for(int i = 0; i<10; i++)
    {
        cout << "Product "<<i+1 <<": ";
        cin >> products[i];
    }
   }
   void ModifyMenu::setPrices()
   {
 for(int i = 0; i<10; i++)
    {
        cout << "Price "<<i+1 <<": ";
        cin >> prices[i];
    }
   }
   
  
