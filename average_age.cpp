#include <iostream>
#include <string>
using namespace std;

int main() {
    int ages[8] = {18,35,30,23,76,12,23,78};
    double sum = 0, avg;

    int arrayLength = sizeof(ages) / sizeof(ages[0]);
    
    for(int age : ages) {
        sum += age;
    }
    avg = sum/arrayLength;

    cout << "The average age is = " << avg << "\n";

    return 0;
}