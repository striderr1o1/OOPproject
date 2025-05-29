#ifndef VENDOR_H
#define VENDOR_H
#include <iostream>
#include <string>
#include "../person.h"
#include "customer.h"
using namespace std;


class Vendor : public Person {
private:
    
    static const int MAX_ITEMS = 10;
    MenuItem orderNames[MAX_ITEMS];
    int orderQuantities[MAX_ITEMS];
    int orderCount;
    MenuItem suppliedNames[MAX_ITEMS];
    int suppliedQuantities[MAX_ITEMS];
    int suppliedCount;

public:
    Vendor();
    Vendor(string user, string pass);
    Vendor(string user, string pass, int OQuantities[], int Squantities[], MenuItem ordernames[], MenuItem suppliednames[], int OQcount, int SQcount,int Ocount, int Scount );
//string user, string pass, int OQuantities[], int Squantities[], MenuItem ordernames[], MenuItem suppliednames[], int OQcount, int SQcount,int Ocount, int Scount 
    bool login(string user, string pass);
    bool receiveOrdersFromAdmin(MenuItem list[], int quan[], int cnt);
    void showMenu();
    void viewOrders();
    void supplyItems();
    void showSuppliedItems();
    void start();
};

#endif