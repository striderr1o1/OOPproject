#include "ADMIN_setMenu.h"
int ModifyMenu::count = 0;
   ModifyMenu::ModifyMenu()
   {
    
   }
   ModifyMenu::ModifyMenu(MenuItem list[], int cnt)
   {count = cnt;
    for(int i = 0; i < count;i++)
    {
       items[i] = list[i];
    }
   }
   void ModifyMenu::setMenu(int cnt)
   { string itemName;
    int price;
    count = cnt;
  
    for(int i = 0; i < count;i++)
    {
       cout << "Enter name: ";
       cin >> itemName;
       items[i].SetName(itemName);
       cout << "Enter price: ";
       cin >> price;
       items[i].SetPrice(price);
      

    }
   }
   void ModifyMenu::displayMenu()
   {
for(int i = 0; i < count;i++)
    {
        items[i].display();
    }
   }
   void ModifyMenu::addItem(MenuItem x)
   {string itemName;
    int price;
    cout << "Enter item name: ";
    cin >> itemName;
       cout << "Enter price: ";
       cin >> price;
    x.SetName(itemName);
    x.SetPrice(price);
    items[count] = x;
    count++;
    
   }
   void ModifyMenu::removeItem(int index)
   {
    items[index] = MenuItem();
    count--;
   }
   void ModifyMenu::start()
   {
      int option;
int cnt;
int index;

MenuItem x;
      do{
      system("clear");
cout << "Modify Customer Menu: ";
cout << "\n1) Set Menu" << endl;
cout << "\n2) display Menu" << endl;
cout << "\n3) add Item" << endl;
cout << "\n4) remove Item" << endl;
cout << "\nEnter 0 to go HOME";




cout << "\nOption: ";
cin >> option;
switch(option)
{
    case 1:
cout << "Enter Item count: ";
cin >> cnt;
setMenu(cnt);
break;
    case 2:
    displayMenu();
    sleep(2000);
   break;
    case 3: 
    addItem(x);
    break;
    case 4:
cout << "Enter index: ";
cin >> index;
removeItem(index);
break;
case 5:
break;
default:
cout << "\nInvalid";
break;
}
if(option == 5)
break;
}while(option < 0 && option <= 4);
   }
   
  
