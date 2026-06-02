#include <iostream>
#include <string>
using namespace std;

int isConsonant(string text, int length) {
    int consonant = 0;

    for(int i = 0; i < length; i++) {
        if(text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u') {
            consonant++;
        }
    }
    return consonant;
}

int main() {
    string text;

    cout << "Enter your text : ";
    getline(cin, text);

    int length = text.length();

    cout << isConsonant(text, length);
    return 0;
}