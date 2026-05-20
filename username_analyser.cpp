#include <iostream>
#include <string>
using namespace std;

int main() {
    int length;
    string userName;

    cout << "Enter your Name : ";
    getline(cin, userName);

    length = userName.length();

    cout << "Name : " << userName << "\n";
    cout << "Length : " << length << "\n";
    cout << "First character : " << userName[0] << "\n";
    cout << "Last character : " << userName[length - 1] << "\n";

    return 0;
  
}