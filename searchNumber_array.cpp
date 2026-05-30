/*Search Number in Array
Use:
array
function returning bool*/

#include <iostream>
using namespace std;

bool isFound(int arr[], int length, int target) {
    for(int i = 0; i < length; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return 0;
}
int main() {
    int arr[5] = {};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << isFound(arr, 5, 22);
    return 0;
}