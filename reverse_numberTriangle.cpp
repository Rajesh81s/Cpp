//Number triangle pattern

#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i = 1; i <= 6; i++) {
        for (int j = 6; j >= i; j--) {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}