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


     Database::~Database() {//closing database
        if(connection == 0){
        sqlite3_close(DB);
        cout << "Database closed.\n";}
    }