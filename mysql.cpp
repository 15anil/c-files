#include <iostream>
#include <vector>
#include <string>

class Account {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    Account(const std::string& accNumber, const std::string& accHolder, double initialBalance)
        : accountNumber(accNumber), accountHolderName(accHolder), balance(initialBalance) {}

    // Member functions
    void displayAccountInfo() const {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Holder: " << accountHolderName << "\n";
        std::cout << "Balance: $" << balance << "\n";
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << "\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << "\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    // Accessor function
    double getBalance() const {
        return balance;
    }
};

class Bank {
private:
    std::vector<Account> accounts;

public:
    // Member functions
    void addAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance) {
        accounts.emplace_back(accNumber, accHolder, initialBalance);
        std::cout << "Account created successfully.\n";
    }

    void displayAllAccounts() const {
        std::cout << "All Accounts:\n";
        for (const auto& account : accounts) {
            account.displayAccountInfo();
            std::cout << "-----------------------\n";
        }
    }

    Account* findAccount(const std::string& accNumber) {
        for (auto& account : accounts) {
            if (accountNumber == accNumber) {
                return &account;
            }
        }
        return nullptr;
    }
};

int main() {
    Bank bank;

    // Adding sample accounts
    bank.addAccount("12345", "John Doe", 1000.0);
    bank.addAccount("67890", "Jane Smith", 500.0);

    // Performing transactions
    Account* johnAccount = bank.findAccount("12345");
    if (johnAccount) {
        johnAccount->displayAccountInfo();
        johnAccount->deposit(200.0);
        johnAccount->withdraw(100.0);
    } else {
        std::cout << "Account not found.\n";
    }

    Account* janeAccount = bank.findAccount("67890");
    if (janeAccount) {
        janeAccount->displayAccountInfo();
        janeAccount->withdraw(700.0);
    } else {
        std::cout << "Account not found.\n";
    }

    // Displaying all accounts
    bank.displayAllAccounts();

    return 0;
}
