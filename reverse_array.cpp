#include <iostream>
using namespace std;

void revArray(int arr[], int target) {
    int start = 0, end = target - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {};

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    revArray(arr, 5);

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}