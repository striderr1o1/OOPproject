#include "customer.h"

int Customer::orderCount = 0;
Customer::Customer()
{
for(int i = 0;i < 10 ;i++)
{
    orders[i] = Order();
}
CustomersideMenu = Menu();
orderCount = 0;
}

Customer::Customer(Order orderlist[], Menu custmenu, int OC)
{
orderCount = OC;
for(int i = 0; i < 10; i++)
{
    orders[i] = Order();
}
CustomersideMenu = custmenu;
}

 Order* Customer::getCustomerOrders()
 {
    return orders;
 }

void Customer::setCustomerOrders(Order orderlists[], int count)
{
    if(count <= 10)
    {orderCount = count;
        for(int i = 0; i < count; i++)
        {
            orders[i] = orderlists[i];
        }
    }
    
}
int Customer::getOrdercount()
{
    return orderCount;
}
void Customer::setCustomerMenu(Menu& mnu)
{
    CustomersideMenu = mnu;
}
Menu Customer::getCustomerMenu()
{
    return CustomersideMenu;
}
string Customer::getUsername()
    {
        return username;
    }
    string Customer::getPass()
    {
        return password;
    }
    void Customer::setUsername(string x)
    {
        username = x;
    }
    void Customer::setPassword(string p)
    {
        password = p;
    }