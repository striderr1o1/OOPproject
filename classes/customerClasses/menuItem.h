#ifndef MenuItem_H
#define MenuItem_H

#include <iostream>
#include <string>
using namespace std;
class MenuItem {
private:
	string name;
	double price;
public:
	MenuItem();
	MenuItem(string n, double p);
	void SetName(string n);
	void SetPrice(double p);
	string getName();
	double getPrice();
	void display();

};
#endif