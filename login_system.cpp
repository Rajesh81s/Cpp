#include <iostream>
#include <string>
using namespace std;

int main() {

    string relUsername = "rajesh81s", relPassword = "Rajesh81s";
    string inUsername, inPassword;

    cout << "Enter your username : ";
    getline(cin, inUsername);
    cout << "Enter your password : ";
    getline(cin, inPassword);

    if (inPassword == relPassword && inUsername == relUsername) {
        cout << "Login successful.\n";
    } else {
        cout << "Invalid credentials\n";
    }

    return 0;
}