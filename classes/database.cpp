#include "database.h"

Database::Database(){
        
        string file = "restaurant.db";
        connection = sqlite3_open(file.c_str(), &DB);//string passed to sqlite, along with database
        if(connection == SQLITE_OK)//returns SQLITE_OK (0) if successful else displays error, if database doesnt exist, its gonna make one
        {
            cout << "Connection made: " << file << endl;
        }
        else{
            cerr << "Error occured during connection: " << sqlite3_errmsg(DB) << endl; 
        }
    };

     int Database::callback(void* NotUsed, int argc, char** argv, char** azColName) {
    for(int i = 0; i < argc; i++) {
        cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << endl;
    }
    cout << endl;
    return 0;
}
    

    void Database::executestatment(const char* sql)
    {
        int state = sqlite3_exec(DB, sql, callback, nullptr, &errorMsg );
        if(state != SQLITE_OK)
        {
            cerr << "Error occured 1: " << *errorMsg << endl;
        }
        else{
            cout << "\nSuccessful 1";
            
        }
        
    }
    void Database::executeStatementStr(string& x)
    {
        int state = sqlite3_exec(DB, x.c_str(), 0, 0, &errorMsg );
        if(state != SQLITE_OK)
        {
            cerr << "Error occured 2: " << *errorMsg << endl;
        }
        else{
            cout << "\nSuccessful 2";
            
        }
    }

    void Database::readData(const char* sql)
    {int status;
        sqlite3_stmt* stmnt;
        status = sqlite3_prepare_v2(DB, sql, -1, &stmnt, nullptr);
        if(status != SQLITE_OK)
        {
            cout << "Error occured in statement preparation: " << *errorMsg << endl;
            return;
        }

        while(sqlite3_step(stmnt) == SQLITE_ROW)
        {
            const unsigned char* name = sqlite3_column_text(stmnt, 0);
            const unsigned char* price = sqlite3_column_text(stmnt, 1);

            cout << "Item Name: " << name << " Price: " << price << endl;
        }
        sqlite3_finalize(stmnt);
    }
    int Database::fetchMenu(Menu& customermenu)
    {
        int status;
        const char* sql = "SELECT * FROM MenuItems;";
        sqlite3_stmt* stmnt;
        status = sqlite3_prepare_v2(DB, sql, -1, &stmnt, nullptr);
        if(status != SQLITE_OK)
        {
            cout << "Error occured in statement preparation: " << *errorMsg << endl;
            return 0;
        }
int counter = 0;
        while(sqlite3_step(stmnt) == SQLITE_ROW)
        {counter++;
            const unsigned char* name = sqlite3_column_text(stmnt, 1);
            int price = sqlite3_column_int(stmnt, 2);
            
            string convertedName = reinterpret_cast<const char*>(name);
         
            MenuItem x(convertedName,price);
            customermenu.addItem(x);
            
            
            //under construction
            //reinterpret_cast<const char*>(
        }
        sqlite3_finalize(stmnt);
        return counter;
    }


     Database::~Database() {//closing database
        if(connection == 0){
        sqlite3_close(DB);
        cout << "Database closed.\n";}
    }