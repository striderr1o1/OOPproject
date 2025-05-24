#include "./classes/admin_classes/ADMIN_setMenu.h"

   SetMenu::SetMenu()
   {
    for(int i = 0; i < 10;i++)
    {
        products[i] = "null";
        prices[i] = 0;
    }
   }
   void SetMenu::setMenu()
   {
    for(int i = 0; i < 10;i++)
    {
        cout << "Product " << i+1 <<": "; cin >> products[i];
        cout << "Price: "; cin >> prices[i];
    }
   }
   void SetMenu::displayMenu()
   {
for(int i = 0; i < 10;i++)
    {
        cout << "Product " << i+1 <<": " << products[i];
        cout << "Price: " << prices[i] << endl;
    }
   }
   string* SetMenu::getProducts()
   {
    return products;
   }
   int* SetMenu::getPrices()
   {
    return prices;
   }
   void SetMenu::setProducts()
   {
    for(int i = 0; i<10; i++)
    {
        cout << "Product "<<i+1 <<": ";
        cin >> products[i];
    }
   }
   void SetMenu::setPrices()
   {
 for(int i = 0; i<10; i++)
    {
        cout << "Price "<<i+1 <<": ";
        cin >> prices[i];
    }
   }
   
  
