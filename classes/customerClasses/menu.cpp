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
    items[itemCount] = x;
    itemCount++;
    
    
 }
 void Menu::deleteItem(int index)
 {
    items[index] = MenuItem();
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
