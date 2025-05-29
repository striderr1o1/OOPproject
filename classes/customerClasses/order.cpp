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
		orderList[count-1].SetName(item.getName());
		orderList[count-1].SetPrice(item.getPrice());
		
		TotalBill = TotalBill+ orderList[count-1].getPrice();
		
	}
	void Order::displayOrder()
	{
		for(int i = 0; i < count;i++)
		{
			
			orderList[i].display();
			
			
			
		}
		cout << "Bill: " << TotalBill << endl;
		
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

void Order::sendSales(double x)
{
	fstream salesFile("sales.txt", ios::app);
	try{
	if(salesFile.is_open())
	{
		salesFile << x << endl;
		salesFile.close();
	}
}catch(exception& e){
	cout << "Error occured in opening file: " << e.what() << endl;
}
	
}

	 void Order::start(Database& db)
	 {int option;
		int option2;
		string itemName;
		
		int tempcount = db.fetchMenu(customerSideMenu);
			customerSideMenu.getitemsList();
		int max = 0;
		do{
			system("clear");
		customerSideMenu.displayItems();
		cout << "\n----Order----\n";
		cout << "1) Add item" << endl;
		cout << "2) Display order\n";
		cout << "3) Checkout\n";
		cout << "5) exit";
		cout <<"\n Enter option:";
		cin >> option;
		switch(option)
		{
			case 1:
			system("clear");
			customerSideMenu.displayItems();
			cout << "Enter item name: ";
			cin >> itemName;
			
			for(int i = 0; i <= sizeof(customerSideMenu.getitemsList()); i++)
			{
				
				if (customerSideMenu.getitemsList()[i].getName() == itemName){
				orderList[count].SetName(customerSideMenu.getitemsList()[i].getName());
				orderList[count].SetPrice(customerSideMenu.getitemsList()[i].getPrice());
				TotalBill = TotalBill + customerSideMenu.getitemsList()[i].getPrice();
				count++;
				

				
				break;
			}
				cout << "Item not found." << endl;
				
				
			}
			break;
			case 2:
			system("clear");
			displayOrder();
			
			cout << "Press 0 to exit: ";
			cin >>option2;
			if(option2 == 0)
			break;

			case 3:
			system("clear");
			cout << "-----Bill-----\n";
			displayOrder();
			sendSales(getTotalbill());
			sleep(3);
			break;
			
		}
	}while(option!=5);
	 }