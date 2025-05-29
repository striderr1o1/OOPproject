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
	 void Order::setMenu(Menu& menu)
	 {
		customerSideMenu = menu;
	 }
Menu Order::getMenu()
{
	return customerSideMenu;
}

	 void Order::start()
	 {int option;
		string itemName;
		MenuItem* list = new MenuItem;
			list = customerSideMenu.getitemsList();
		do{
		customerSideMenu.displayItems();
		cout << "\n----Order----";
		cout << "1) Add item" << endl;
		cout << "2) Display order\n";
		cout << "3) Checkout\n";
		cout <<"\n Enter option:";
		cin >> option;
		switch(option)
		{
			case 1:
			cout << "Enter item name: ";
			cin >> itemName;
			
			for(int i = 0; i < 100; i++)
			{
				if (list->getName() == itemName){
				orderList->SetName(list[i].getName());
				orderList->SetPrice(list[i].getPrice());
				TotalBill = TotalBill + list[i].getPrice();
				break;
			}
				else
				{
					cout << "Item not found." << endl;
					break;
				}
			}
			
			case 2:
			displayOrder();
			break;

			case 3:
			cout << "-----Bill-----\n";
			cout << "Total: " << TotalBill << endl;
			break;
			
		}
	}while(option > 0 && option <=3);
	 }