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
    Order Customerorder;
public:
    Customer();
    Customer(Order order);
    string getUsername();
    string getPass();
    void setUsername(string x);
    void setPassword(string p);
    Order getCustomerOrder();
    void setCustomerOrders(Order order);
   
    
   void start();
  
};

#endif