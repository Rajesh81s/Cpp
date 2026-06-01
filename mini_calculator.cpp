#include <iostream>
#include <string>
using namespace std;

int main() {
    double num1, num2;
    char operation;

        cout << "Enter your first number : ";
        cin >> num1;
        cout << "Enter your second nunber : ";
        cin >> num2;
        cout << "Enter operation type(eg : +, -, /, *) : ";
        cin >> operation;

        switch (operation) {
            case '+' :
                cout << "The sum is : " << (num1+num2);
                break;
            case '-' :
                cout << "The subtraction is : " << (num1-num2);
                break;
            case '/' :
                if (num2 != 0) {
                    cout << "The divison is : " << (num1/num2);
                } else {
                    cout << "Cannot divide by zero.";
                }
                break;
            case '*' :
                cout << "The multiplication is : " << (num1*num2);
                break;
            default :
                cout << "Invalid operator.";
        }
        return 0;
} 
//Better version with function later