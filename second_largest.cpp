#include <iostream>
using namespace std;

int isSecondLargest(int arr[], int length) {
    int secondLargest = INT_MIN;
    int largest = arr[0];
    for(int i = 0; i < length; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[5] = {};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << isSecondLargest(arr, 5);
    return 0;
}