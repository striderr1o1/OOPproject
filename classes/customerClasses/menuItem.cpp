#include "menuItem.h"

MenuItem::MenuItem() {};

MenuItem::MenuItem(string n="",double p=0.0) {
	name = n;
	price = p;

}
void MenuItem::SetName(string n) {
	name = n;
}
void MenuItem::SetPrice(double p) {
	price = p;
}
string MenuItem::getName() {
	return name;
}
double MenuItem::getPrice() {
	return price;
}
void MenuItem::display() {
	cout << "Item:" << name << " Price: " << price << " PKR " << endl;
}