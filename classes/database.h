#ifndef database_h
#define database_h

#include <sqlite3.h>
#include <iostream>
#include <string>
using namespace std;
class Database{
    private:
    sqlite3* DB;
    char* errorMsg;
    int connection;
    string statement;
    public:
    Database(){
        
        string file = "mynewrms.db";
        connection = sqlite3_open16(file.c_str(), &DB);//string passed to sqlite, along with database
        if(connection == SQLITE_OK)//returns SQLITE_OK (0) if successful else displays error, if database doesnt exist, its gonna make one
        {
            cout << "Connection made: " << file << endl;
        }
        else{
            cerr << "Error occured" << sqlite3_errmsg(DB) << endl; 
        }
    };
    

    void executestatment(const char* sql)
    {
        int state = sqlite3_exec(DB, sql, nullptr, nullptr, &errorMsg );
        if(state == SQLITE_OK)
        {
            cerr << "Error occured: " << *errorMsg << endl;
        }
        else{
            cout << "\nSuccessful";
            
        }
        
    }


     ~Database() {//closing database
        if(connection == 0){
        sqlite3_close(DB);
        cout << "Database closed.\n";}
    }
};


#endif

