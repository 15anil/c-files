#include <iostream>

const int MAX_SIZE = 5; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initialize the top to -1 to indicate an empty stack
    }

    // Push operation to add an element to the stack
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Stack Overflow: Cannot push element, the stack is full.\n";
        } else {
            arr[++top] = value;
            std::cout << "Pushed " << value << " onto the stack.\n";
        }
    }

    // Pop operation to remove the top element from the stack
    void pop() {
        if (top == -1) {
            std::cout << "Stack Underflow: Cannot pop element, the stack is empty.\n";
        } else {
            std::cout << "Popped " << arr[top--] << " from the stack.\n";
        }
    }

    // Display the elements in the stack
    void display() {
        if (top == -1) {
            std::cout << "Stack is empty.\n";
        } else {
            std::cout << "Stack elements: ";
            for (int i = 0; i <= top; ++i) {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }
    }
    int peek(){
        if(top==-1){
            std::cout<<"stack is empty"<<std::endl;
        }
        return arr[top];
    }
};

int main() {
    Stack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.display();

    myStack.pop();
    myStack.display();

    myStack.push(4);
    myStack.push(5);
    myStack.push(6); // This will result in a stack overflow
    std::cout<<"top element is: "<<myStack.peek()<<std::endl;
    myStack.display();

    return 0;
}
