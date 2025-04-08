#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string account_number;
    double balance;

public:
    Account(const string& account_ref, double& balance_ref):
        account_number(account_ref), balance(balance_ref) {}

    bool processPayment(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Payment of $" << amount << " processed successfully. New Balance is: " << balance << endl;
            return true;
        } else {
            cout << "Insufficient funds. Payment failed." << endl;
            return false;
        }
    }
};

int main() {
    string account_number;
    double initial_balance;

    cout << "Enter account number: ";
    cin >> account_number;
    if(account_number.length()!=10){
        cout<<"Invalid account number."<<endl;
        return 1;
    }

    cout << "Enter initial balance: ";
    cin >> initial_balance;

    Account myaccount(account_number, initial_balance);

    double paymentAmount;
    cout << "Enter payment amount: $";
    cin >> paymentAmount;

    cout << "Attempting to process payment of $" << paymentAmount << endl;
    bool paymentStatus = myaccount.processPayment(paymentAmount);

    if (paymentStatus) {
        cout << "Payment was successful" << endl;
    } else {
        cout << "Payment failed. Try again later." << endl;
    }

    return 0;
}
