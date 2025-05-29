#ifndef database_h
#define database_h

#include <sqlite3.h>
#include <iostream>
#include <string>
#include "menu.h"
#include "menuItem.h"

using namespace std;
class Database{
    private:
    sqlite3* DB;
    char* errorMsg;
    int connection;
    string statement;
    public:
    Database();
    static int callback(void* NotUsed, int argc, char** argv, char** azColName) ;
    void executestatment(const char* sql);
    void executeStatementStr(string& x);

    void readData(const char* sql);
    int fetchMenu(Menu& customermenu);
//one function to execute statements
//one function read from database
//others too
//will add database functionality in admin, he will choose items for customer, items executed
//to database using one of the functions made here. Customer will pick items -->member function
//picks data from database
     ~Database();
};


#endif

