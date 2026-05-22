#include <iostream>
#include <string>
using namespace std;

int main() {
    int num, correctNum = 7;

    do {
        cout << "Guess the number : ";
        cin >> num;
        if (num != correctNum) {
        cout << "Incorrect guess, try again\n";
    }
    } while (num != correctNum);
    
    cout << "Correct guess!\n";
    return 0;
}