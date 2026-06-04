#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool is_correctPassword(string password) {

        if(password.length() > 8) {
            for(char c : password) {
                if(isdigit(c)) {
                    return true;;
                }
            }
        }
        return false;
}


int main() {
    string password;

    cout << "Enter your Password :";
    getline(cin, password);

    int length = password.length();

    if(is_correctPassword(password)) {
        cout << "Correct";
    } else {
        cout << "Incorrect";
    }

    return 0;
}