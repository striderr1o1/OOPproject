#include "order.h"
int Order::count = 0;

Order::Order()
{
	for(int i = 0; i < 100; i++)
	{
		orderList[i] = MenuItem();
	}
	TotalBill = 0;
	
}
	Order::Order(MenuItem orderlist[], double totbill, int c)
	{
		for(int i = 0; i < 100; i++)
	{
		orderList[i] = MenuItem();
	}
	count = c;
	for(int i = 0; i <count; i++)
	{
		orderList[i] = orderlist[i];
	}
	TotalBill = totbill;
	
	}
	void Order::addItem(MenuItem& item)
	{
		count++;
		orderList[count] = item;
		TotalBill = TotalBill+ orderList[count].getPrice();
	}
	void Order::displayOrder()
	{
		for(int i = 0; i < count;i++)
		{
			orderList[i].display();
		}
		cout <<"Bill: Rs." << TotalBill << endl;
	}
	 double Order::getTotalbill()
	 {
		return TotalBill;
	 }