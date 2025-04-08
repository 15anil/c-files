#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Product{
private:
    string name;
    string brand;
    double price;
public:
    Product(string name,string brand,double price):name(name),brand(brand),price(price){}
    string getName() const {
        return name;
    }
    string getBrand() const {
        return brand;
    }
    double getPrice() const {
        return price;
    }
};

class ShoppingCart{
private:
    vector<Product> items;
public:
    void addItem(const Product& product){
        items.push_back(product);
    }
    double calculateTotal(){
        double total = 0;
        for(const auto& item: items){
            total += item.getPrice();
        }
        return total;
    }   
};

int main(){
    int password_limit = 3;
    int password_count = 0;
    string password;

    while(password_count < password_limit){
        cout << "Enter your password: ";
        cin >> password;
        if(password == "Anil"){
            cout << "Welcome to online laptop store" << endl;
            ShoppingCart cart;
            Product appleLaptop("Macbook pro 13 ","Apple",1999.999);
            Product dellLaptop("XPS 13", "Dell", 1299.99);
            Product lenovoLaptop("ThinkPad X1 Carbon", "Lenovo", 1499.99);

            while(true){
                cout << "Select an option: " << endl;
                cout << "1. Add MacBook Pro (Apple) to cart" << endl;
                cout << "2. Add XPS 13 (Dell) to cart" << endl;
                cout << "3. Add ThinkPad X1 Carbon (Lenovo) to cart" << endl;
                cout << "4. Checkout" << endl;
                cout << "Enter option: ";
                int choice;
                cin >> choice;

                double total = 0; // Declare total outside the switch statement

                switch(choice){
                    case 1:
                        cart.addItem(appleLaptop);
                        cout << appleLaptop.getName() << " added to cart " << endl;
                        break;
                    case 2:
                        cart.addItem(dellLaptop);
                        cout << dellLaptop.getName() << " added to cart " << endl;
                        break;
                    case 3:
                        cart.addItem(lenovoLaptop);
                        cout << lenovoLaptop.getName() << " added to cart " << endl;
                        break;
                    case 4:
                        total = cart.calculateTotal(); // Assign value to total
                        cout << "Total amount to be paid: $" << total << endl;
                        cout << "Thank you for shopping with us!" << endl;
                        return 0;
                    default:
                        cout << "Invalid option! Please enter a valid number." << endl;
                } 
            }
        } else {
            password_count++;
            cout << "Wrong password attempted. Attempts remaining are: " << (password_limit - password_count) << endl;
        }
    }

    cout << "Sorry, your account is locked. Contact the bank." << endl;
    return 0;
}


