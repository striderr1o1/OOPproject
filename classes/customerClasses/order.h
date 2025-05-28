#ifndef Order_H
#define Order_H
#include "menuItem.h"
#include <iostream>
using namespace std;
class Order{
private:
	MenuItem orderList[100];
	static int count;
	double TotalBill;
	
public:
	Order();
	

	Order(MenuItem orderlist[], double totbill, int c);
	void addItem(MenuItem& item);
	void displayOrder();
	 double getTotalbill();



};
#endif