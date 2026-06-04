#include <iostream>
#include <string>
using namespace std;

string character(string text, int length) {
    for(int i = 0; i < length; i++) {
        if(text[i] == 'a') {
            text[i] = 'x';
        }
    }
    return text;
}

int main() {
    string text = "banana";
    int length = text.length();

    cout << character(text, length);
    return 0;
}