#include <iostream>
#include <string>
#include <vector>

// Base class representing an account
class Account {
protected:
    std::string name;
    std::string accountNumber;
public:
    Account(const std::string& name, const std::string& accountNumber) 
        : name(name), accountNumber(accountNumber) {}

    // Getter method for account name
    std::string getName() const {
        return name;
    }
};

// Derived class representing a customer
class Customer : public Account {
public:
    Customer(const std::string& name, const std::string& accountNumber) 
        : Account(name, accountNumber) {}

    // Method to initiate a payment
    void initiatePayment(Account* recipient, double amount) {
        std::cout << name << " initiates a payment to " << recipient->getName() 
                  << " of amount $" << amount << std::endl;
        // Placeholder implementation of payment processing
    }
};

// Derived class representing a merchant
class Merchant : public Account {
public:
    Merchant(const std::string& name, const std::string& accountNumber) 
        : Account(name, accountNumber) {}

    // Method to receive a payment
    void receivePayment(Account* sender, double amount) {
        std::cout << name << " receives a payment from " << sender->getName() 
                  << " of amount $" << amount << std::endl;
        // Placeholder implementation of payment processing
    }
};

int main() {
    // Create customers and merchant
    Customer john("John Doe", "12345");
    Customer jane("Jane Smith", "54321");
    Merchant walmart("Walmart", "98765");

    // John initiates a payment to Jane
    john.initiatePayment(&jane, 100.0);

    // Jane receives a payment from John
    jane.initiatePayment(&john, 50.0);

    // Walmart receives a payment from Jane
    walmart.receivePayment(&jane, 200.0);

    return 0;
}