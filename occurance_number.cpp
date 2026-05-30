#include <iostream>
using namespace std;

int occurNum(int arr[], int target, int length) {
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[5]= {};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << occurNum(arr, 22, 5);
    return 0;
}