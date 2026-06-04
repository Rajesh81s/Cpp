#include <iostream>
#include <string>
using namespace std;

void num(int n) {
    if(n >= 1) {
        num(n-1);
        cout << n << "\n";
    }
}

int main() {
    int num1 = 5;

    num(num1);

    return 0;
}