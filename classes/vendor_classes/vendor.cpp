#include <iostream>
#include "vendor.h"

using namespace std;
Vendor::Vendor()
{
    username = "null";
    password = "null";
    for(int i = 0; i< MAX_ITEMS; i++)
    {
        orderQuantities[i] = 0;
        suppliedQuantities[i] = 0;
    }
    orderCount = 0;
    suppliedCount = 0;
}
Vendor::Vendor(string user, string pass, int OQuantities[], int Squantities[], MenuItem ordernames[], MenuItem suppliednames[], int OQcount, int SQcount,int Ocount, int Scount ) {
    username = user;
    password = pass;
    orderCount = Ocount;
    suppliedCount = Scount;
    for(int i = 0; i < OQcount; i++)
    {
        orderQuantities[i] = OQuantities[i];
        orderNames[i] = ordernames[i];
    }
    for(int i = 0; i < SQcount; i++)
    {
        suppliedQuantities[i] = Squantities[i];
        suppliedNames[i] = suppliednames[i];
    }

}

bool Vendor::login(string user, string pass) {
    return (user == username  && pass == password);
}

bool Vendor::receiveOrdersFromAdmin(MenuItem list[], int quan[], int cnt) {
    orderCount = cnt;
    for (int i = 0; i < cnt && i < MAX_ITEMS; ++i) {
        orderNames[i] = list[i];
        orderQuantities[i] = quan[i];
    }
    cout << "Orders received from Admin: " << orderCount << "\n";
    return true;
}

void Vendor::showMenu() {
    int choice;
    do {
        cout << "\n--- Vendor Menu ---\n";
        cout << "1. View Orders from Admin\n";
        cout << "2. Supply Items\n";
        cout << "3. View Supplied Items\n";
        cout << "0. Logout\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            viewOrders();
            break;
        case 2:
            supplyItems();
            break;
        case 3:
            showSuppliedItems();
            break;
        case 0:
            cout << "Logging out...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}

void Vendor::viewOrders() {
    cout << "\n--- Orders from Admin ---\n";
    if (orderCount == 0) {
        cout << "No orders available.\n";
    }
    else {
        for (int i = 0; i < orderCount; ++i) {
            cout << i + 1 << ". " << orderNames[i].getName() << " - Quantity: " << orderQuantities[i] << "\n";
        }
    }
}

void Vendor::supplyItems() {
    suppliedCount = orderCount;
    cout << "\n--- Supplying Items ---\n";
    for (int i = 0; i < orderCount; ++i) {
        suppliedNames[i] = orderNames[i];
        cout << "Enter quantity supplied for " << orderNames[i].getName() << ": ";
        cin >> suppliedQuantities[i];
    }
    cout << "Items supplied successfully!\n";
}

void Vendor::showSuppliedItems() {
    cout << "\n--- Supplied Items ---\n";
    if (suppliedCount == 0) {
        cout << "No items supplied yet.\n";
    }
    else {
        for (int i = 0; i < suppliedCount; ++i) {
            cout << i + 1 << ". " << suppliedNames[i].getName() << " - Quantity: " << suppliedQuantities[i] << "\n";
        }
    }
}