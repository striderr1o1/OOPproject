#include "customer.h"


Customer::Customer()
{

}

Customer::Customer(Order order)
{

Customerorder = order;

}

 Order Customer::getCustomerOrder()
 {
    return Customerorder;
 }

void Customer::setCustomerOrders(Order order)
{
    Customerorder = order;
    
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
     
    //menu-
    //    |___Display menuitems
    //    |___Make order
    void Customer::start()
    {system("clear");
        int option;
        do{
        cout << "\nWelcome to Customer";
        cout << "\nPress 1 to see Menu";
        cout << "\nPress 2 to go back\n";
        cin >> option;
        switch(option)
        {
            case 1:
            Customerorder.start();
            break;
            case 2:
           break;
            default:
            break;
        }
    }while(option < 1 && option > 2);
    }