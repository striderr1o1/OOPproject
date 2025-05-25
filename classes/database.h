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
    public:
    Database(){};
    Database(string filename)//string 
    {
        int connection = sqlite3_open16(filename.c_str(), &DB);//string passed to sqlite, along with database
        if(connection == SQLITE_OK)//returns SQLITE_OK (0) if successful else displays error, if database doesnt exist, its gonna make one
        {
            cout << "Connection made: " << filename << endl;
        }
        else{
            cerr << "Error occured" << sqlite3_errmsg(DB) << endl; 
        }
        
    }


     ~Database() {//closing database
        sqlite3_close(DB);
        cout << "Database closed.\n";
    }
};


#endif

