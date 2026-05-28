#include <iostream>
#include <string>
using namespace std;

int main () {
    string word;
    bool is_palindrome = true;

    cout << "Enter a word in smallercase : ";
    getline(cin, word);

    int start = 0, end = word.length() - 1;

    while(start < end) {
        if(word[start] != word[end]) {
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }
    if(is_palindrome == true) {
        cout << "Palindrome!\n";
    } else {
        cout << "Not palindrome\n";
    }

    return 0;
}