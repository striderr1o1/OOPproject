#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "../person.h"
#include "menu.h"
#include "order.h"       // You'll create an Order class
   
//customer--
//          | orders
//               |_______menuItems
//          | menuShow
//               |_______menuItems
class Customer : public Person {
private:
    Order orders[10];
    Menu CustomersideMenu;   
    static int orderCount;
public:
    Customer();
    Customer(Order orderlist[], Menu custmenu, int OC);
    string getUsername();
    string getPass();
    void setUsername(string x);
    void setPassword(string p);
    Order* getCustomerOrders();
    void setCustomerOrders(Order orderlists[], int count);
    int getOrdercount();
    void setCustomerMenu(Menu& mnu);
    Menu getCustomerMenu();
   
  
};

#endif