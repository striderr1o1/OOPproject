#ifndef VendorRequest_h
#define VendorRequest_h

#include <iostream>
#include <string>
#include "customer.h"
#include "vendor.h"
#include "menuItem.h"
using namespace std;
class VendorRequest{
   private:
bool request;
MenuItem RequestedItems[100];
int quantities[100];
static int count;

   public:
VendorRequest();
void setItems(MenuItem list[], int listcount, int quan[]);
bool makeRequest(Vendor& v);
void start();
//   void receiveOrdersFromAdmin(string names[], int quantities[], int count);

  
};


#endif