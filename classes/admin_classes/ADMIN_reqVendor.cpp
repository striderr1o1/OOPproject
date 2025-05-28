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
   