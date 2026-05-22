#include <iostream>
#include <string>
using namespace std;

int main() {
    string realPassword = "Rajesh#1213", inPassword;
    int attempts = 3;

    do {
        cout << "Enter your password : ";
        getline(cin, inPassword);
        
        if (inPassword != realPassword) {
            attempts --;
            cout << "Invalid password, attempts left : " << attempts << "\n";
            if (attempts == 0) {
                cout << "Access blocked!\n";
                break;
            }
        } else {
            cout << "Access granted!\n";
        }
    } while (inPassword != realPassword);

    return 0;
}