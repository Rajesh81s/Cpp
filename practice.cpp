//Fahrenhite to celcious converter

#include <iostream>
using namespace std;

double myfunction(double fahrenheit) {
    return (5.0/ 9.0) * (fahrenheit - 32);
}

int main() {
    double f_value = 98.8;
    double result = myfunction(f_value);
    cout << result;
    return 0;
}