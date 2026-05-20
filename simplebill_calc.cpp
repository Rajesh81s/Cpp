//Simple bill calculator
#include <iostream>
#include <string>
using namespace std;

int main() {
    int quantity;
    double price, subtotal, finalAmount, gst;
    string productName, userName;

    cout << "Enter your Name : ";
    getline(cin, userName);
    cout << "Enter your product name : ";
    getline(cin, productName);
    cout << "Enter the quantity : ";
    cin >> quantity;
    cout << "Enter the price of the product : ";
    cin >> price;
    subtotal = price * quantity;
    gst = subtotal * 18/100;
    finalAmount = subtotal + gst;

    cout << "=== RECEIPT ===\n";
    cout << "Customer       : " << userName << "\n";
    cout << "Product        : " << productName << "\n";
    cout << "Total quantity : " << quantity << "\n";
    cout << "Subtotal       : " << subtotal << "\n";
    cout << "GST            : " << gst << "\n";
    cout << "Final amount   : " << finalAmount << "\n";
    cout << "============\n";
    return 0;

}