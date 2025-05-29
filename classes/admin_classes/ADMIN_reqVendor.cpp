#include "ADMIN_reqVendor.h"
int VendorRequest::count = 0;
VendorRequest::VendorRequest()
{
    request = false;
}

void VendorRequest::setItems(MenuItem list[], int listcount, int quan[])
{
    
count = listcount;
    for(int i = 0; i< count; i++)
    {
        RequestedItems[i] = list[i];
        quantities[i] = quan[i];
    }
}
bool VendorRequest::makeRequest(Vendor& v)
{
request = v.receiveOrdersFromAdmin(RequestedItems, quantities, count);
return request;
}

void VendorRequest::start(Vendor& v)
{int itemcount;
    string name;
    int price;
    int* tempquantity = new int[itemcount];
    MenuItem* temp = new MenuItem[itemcount];
    do{
        system("clear");
    cout << "Enter No. of Items: ";
    cin >> itemcount;
    cout << "Enter item details";
    for(int i = 0; i < itemcount; i++)
    {
        cout << i+1 << " Enter item name: ";
        cin >> name;
        cout << i+1 << "Enter item price: ";
        cin >> price;
        cout << i+1 << "Quantity: ";
        cin >> tempquantity[i];
        temp->SetName(name);
        temp->SetPrice(price);
    }
    setItems(temp, itemcount, tempquantity);
    makeRequest(v);
}while(itemcount < 0 && itemcount > 100);
}
   