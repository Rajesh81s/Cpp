#include <iostream>
#include <string>
using namespace std;

int main() {
    double marks;
    
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks < 0 || marks > 100){
        cout << "Marks not Valid.\n";
    } else if (marks >= 90) {
            cout << "A\n";
        } else if (marks >= 80) {
            cout << "B\n";
        } else if (marks >= 70) {
            cout << "C\n";
        } else {
            cout << "Failed!\n";
        }
    
    return 0;
        
}