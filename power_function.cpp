#include <iostream>
#include <string>
using namespace std;

int hh(int base, int power) {
    if(power == 0) {
        return 1;
    } else {
        return base * hh(base, power - 1);
    }
    
}

int main() {
    int base, power;
    cout << "Enter base and power : ";
    cin >> base >> power;
    cout << hh(base, power);
    return 0;
}