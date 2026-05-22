//Password retry system
#include <iostream>
#include <string>
using namespace std;

int main() {
    string realPassword = "Rajesh@121363", inPassword;

    while (inPassword != realPassword) {
        cout << "Enter password : ";
        getline(cin, inPassword);

        if (inPassword != realPassword) {
            cout << "Wrong password\n";
        }
    }
    cout << "Access granted\n";

    return 0;
}