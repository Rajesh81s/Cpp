#include <iostream>
using namespace std;

int smallestElement(int arr[], int length) {
    int smallest = arr[0];
    for(int i = 1; i < length; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[5] = {};

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Smallest number in the array is : " << smallestElement(arr, 5);
    return 0;
}

