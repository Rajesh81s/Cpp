//Reverse string
#include <iostream>
#include <string>
using namespace std; 


string reverse(string word) {
    int length = word.length();
    int start = 0, end = length - 1;

    while(start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
    return word;
}

int main() {
    string word = "hdfbddfeb";
    cout << reverse(word);
    return 0;
}