#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
        cout << "You are old enough to vote.\n";
        if (isCitizen) {
            cout << "And you are a citizen also to vote.\n";
        } else {
            cout << "You are not a citizen so not allowed to vote.\n";
        }
    } else {
        cout << "You are not old enough to vote.\n";
    }

    return 0;
}