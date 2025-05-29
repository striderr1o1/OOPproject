#ifndef Order_H
#define Order_H
#include "menuItem.h"
#include "menu.h"
#include <iostream>
#include "../database.h"
#include "unistd.h"
using namespace std;
class Order{
private:
	MenuItem orderList[100];
	Menu customerSideMenu;
	static int count;
	double TotalBill;
	
public:
	Order();
	Order(MenuItem orderlist[], double totbill, int c);
	void addItem(MenuItem& item);
	Menu getMenu();
	void setMenu(Menu& menu);
	void displayOrder();
	double getTotalbill();
	void start(Database& db);



};
#endif