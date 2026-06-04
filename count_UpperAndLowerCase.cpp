#include <iostream>
#include <string>
using namespace std;

int returncount(string text, int length, int &lowerCase) {
    int upperCase = 0;
    lowerCase = 0;

    for(int i = 0; i < length; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') {
            upperCase++;
        } else if(text[i] >= 'a' && text[i] <= 'z') {
            lowerCase++;
        }
    }
    return upperCase;
}

int main() {
    string text;
    int length, lowerCase, upperCase;
    cout << "Enter a string : ";
    getline(cin, text);
    length = text.length();

    upperCase = returncount(text, length, lowerCase);

    cout << "Upper case = " << upperCase << endl;
    cout << "lower Case = " << lowerCase << endl;
    return 0;
}