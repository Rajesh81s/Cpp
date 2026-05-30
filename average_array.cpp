//Return averag of a array using function

#include <iostream>
using namespace std;

double averageFunction(int arr[], int n) {
    double sum = 0, avg = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = sum / n;
    return avg;
}

int main() {
    int arr[5] = {};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << averageFunction(arr, 5);
    return 0;
}