#include <iostream>
#include <string>
using namespace std;

int num(int n) {
    if(n > 0) {
        return n + num(n-1);
    } else {
        return 0;
    }
}

int main() {
    int total = num(5);
    cout << total;
    return 0;
}