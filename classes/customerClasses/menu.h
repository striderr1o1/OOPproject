#ifndef MENU_H
#define MENU_H

#include "menuItem.h"

class Menu {
private:
    MenuItem items[100];  
    static int itemCount;

public:
    Menu();
    Menu(MenuItem list[], int itemcount);
    void addItem(MenuItem& x);
    void deleteItem(int index);
    MenuItem getItem(int index);
    void displayItems();
    MenuItem* getitemsList();
void setitemsList(MenuItem list[], int count);
void start();
void getMenufromAdmin(MenuItem itm[], int cnt);

};

#endif