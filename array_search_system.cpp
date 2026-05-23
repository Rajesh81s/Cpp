#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[5] = {45,34,32,54,89};
    int targetNumber;
    bool found = false;

    cout << "Enter target number : ";
    cin >> targetNumber;

    for(int i = 0; i < 5; i++) {
        if (targetNumber == arr[i]) {
            found = true;
            break;
        }
    }
    if (found == true) {
        cout << "FOUND!";
    } else {
        cout << "NOT FOUND!";
    }

    return 0;
}