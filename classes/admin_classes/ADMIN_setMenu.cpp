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
void ModifyMenu::removeItem()
   {
    count--;
   }

void ModifyMenu::sendMenutoCustomer(Customer& c)
   {
      c.getCustomerOrder().getMenu().getMenufromAdmin(items, count);
      }



void ModifyMenu::sendMenutoDatabase(Database& db)
   {
      //db made in main
      const char* sqlStatment = "CREATE TABLE IF NOT EXISTS MenuItems (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT NOT NULL UNIQUE, price INTEGER NOT NULL)";
      db.executestatment(sqlStatment);

      for(int i = 0; i < count; i++)
      {
         string name = items[i].getName();
         string price = to_string(items[i].getPrice());
         string dataEntry = "INSERT INTO MenuItems (name, price) VALUES ('" + name + "', " + price + ")";
         db.executeStatementStr(dataEntry);
      }
      }
void ModifyMenu::getMenufromDatabase(Database& db)
{
   const char* stmnt = "SELECT * FROM MenuItems;";
   db.readData(stmnt);
}
void ModifyMenu::start(Customer& c, Database& d)
   {
      int option;
int cnt;
int index;
int option2;
MenuItem x;
      do{
      system("clear");
cout << "Modify Customer Menu: ";//send data to database
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
sendMenutoDatabase(d);
break;
    case 2:
    this->getMenufromDatabase(d);
    cout << "Press 0 to go back";
   cin >> option2;
   if(option2 == 0)
   break;
    case 3: 
    addItem(x);
    sendMenutoDatabase(d);
    break;

    case 4:
cout << "Enter index: ";
cin >> index;
removeItem();
sendMenutoCustomer(c);
break;
default:
cout << "\nInvalid";
break;
}

}while(option!=0);
}


