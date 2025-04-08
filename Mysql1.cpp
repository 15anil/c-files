#include <iostream>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

using namespace std;
using namespace sql;

int main() {
    // Initialize MySQL driver
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;

    try {
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "Iamanilnemani15?"); // Replace with your MySQL server IP, username, and password
        con->setSchema("airtraffic"); // Replace with your database name

        // Execute a sample query
        stmt = con->createStatement();
        res = stmt->executeQuery("SELECT * FROM flights_table"); // Replace with your table name

        // Process the result set
        while (res->next()) {
            cout << "ID: " << res->getInt("id") << ", Name: " << res->getString("name") << endl; // Replace id and name with your column names
        }

        delete res;
        delete stmt;
        delete con;
    } catch (sql::SQLException &e) {
        cout << "SQLException: " << e.what() << endl;
    }

    return 0;
}
