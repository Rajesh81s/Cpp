//Star Triangle

#include <iostream>
#include <string>
using namespace std;

void starTriangle() {
    for(int i = 1; i < 6; i++) {
        for(int j = 1; j < i; j++) {
            cout << '*';
        }
        cout << "\n";
    }
}

int main() {
    starTriangle();
    return 0;
}