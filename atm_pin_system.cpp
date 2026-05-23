#include <iostream>
#include <string>
using namespace std;

int main() {
    int attempts = 3;
    int savedPin = 81014, userPin;

    do {
        cout << "Enter your pin : ";
        cin >> userPin;

        if (savedPin != userPin) {
            attempts --;
            if (attempts == 0) {
                cout << "Maximum limit reached, access blocked!";
                break;
            }
            cout << "Wrong pin! " << attempts << " attempts left.\n";
        } else {
            cout << "Access granted!";
            break;
        }

    } while (savedPin != userPin);

    return 0;
}