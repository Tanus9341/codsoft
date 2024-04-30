
#include <iostream>
using namespace std;
int  add(int  x, int  y);
int  subtract(int  x, int  y);
int  multiply(int  x, int  y);
int  divide(int  x, int  y);

int main() {
    int  num1, num2;
    char op;
while(true){
    cout << "Welcome to the Calculator Program!" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl<<endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl<<endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl<<endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << divide(num1, num2) << endl<<endl;
            else
                cout << "Error: Division by zero!" << endl<<endl;
            break;
        default:
            cout << "Invalid operation!" << endl<<endl;
            
    }
}
    return 0;
}
int  add(int  x, int  y) {
    return x + y;
}

int  subtract(int  x, int  y) {
    return x - y;
}

int  multiply(int  x, int  y) {
    return x * y;
}

int  divide(int  x, int  y) {
    return x / y;
}
