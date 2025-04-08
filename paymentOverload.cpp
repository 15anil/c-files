#include<iostream>
using namespace std;

class Payment{
private:
    double amount;
public:
    Payment(double amt) : amount(amt) {}
    
    // Overloading the + operator
    Payment operator+(const Payment& pay){
        double total = this->amount + pay.amount;
        return Payment(total);
    }
    
    // Getter method for the amount
    double get_amount() const{
        return amount;
    }

    // Overloading the << operator for output stream
    friend ostream& operator<<(ostream& os, const Payment& p) {
        os << "Payment amount: $" << p.amount;
        return os;
    }
};

void printAmount(const Payment& p){
    cout << p << endl; // Using the << operator overload
}

int main(){
    Payment p1(50.55);
    Payment p2(98.45);
    Payment totalPayment = p1 + p2;

    cout << "Payment 1: " << endl;
    printAmount(p1);
    cout << "Payment 2: " << endl;
    printAmount(p2);
    cout << "Total Payment: " << endl;
    printAmount(totalPayment);

    return 0;
}
