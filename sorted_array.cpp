#include <iostream>
using namespace std;

bool isSorted(int arr[], int length) {
    for(int i = 1; i < length; i++) {
        if(arr[i] < arr[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << isSorted(arr, length);
    return 0;
}