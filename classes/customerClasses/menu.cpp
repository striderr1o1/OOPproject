#include "menu.h"

int Menu::itemCount = 0;
Menu::Menu()
{
    for(int i = 0; i < 100; i++)
    {
        items[i] = MenuItem();
    }
}
 Menu::Menu(MenuItem list[], int itemcount)
 {itemCount = itemcount;
    for(int i = 0; i < itemcount; i++)
    {
        items[i] = list[i];
    }
 }
 void Menu::addItem(MenuItem& x)
 {
    itemCount++;
    items[itemCount-1].SetName(x.getName());
    items[itemCount-1].SetPrice(x.getPrice());
    
    
    
 }
 void Menu::deleteItem(int index)
 {
    items[index].SetName("NULL");
    items[index].SetPrice(0);
    itemCount--;
 }
  MenuItem Menu::getItem(int index)
  {
    return items[index];
  }
    void Menu::displayItems()
    {
        for(int i = 0; i < itemCount; i++)
        {
            items[i].display();
        }
    }
    MenuItem* Menu::getitemsList()
    {
        return items;
    }
    void Menu::setitemsList(MenuItem list[], int count)
    {
        if(count <= 100)
        {
            itemCount = count;
            for(int i = 0; i < itemCount; i++)
            {
                items[i] = list[i];
            }
        }
    }

    void Menu::getMenufromAdmin(MenuItem itm[], int cnt)
     {
        itemCount = cnt;
        for(int i = 0; i < itemCount; i++)
        {
            string name;
            int price;
            name = itm[i].getName();
            items[i].SetName(name);
            price = itm[i].getPrice();
            items[i].SetPrice(price);
        }
     }
    void Menu::start()
    {
        system("clear");
        displayItems();
        
    }
