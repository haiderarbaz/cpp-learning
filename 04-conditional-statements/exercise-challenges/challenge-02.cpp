// Challenge 2: If-Else Statement
// Create a program that asks the user for their age. If the user is older than 18, allow them to proceed with purchasing tea; otherwise, print a message saying they are too young to purchase.

#include <iostream>

using namespace std;

int main(){

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age > 18){
        cout << "\"Congratulations! you can proceed with your purchase.\"" << endl;
    } else {
        cout << "\"Sorry! you're too young to purchase.\"" << endl;
    }
    

    return 0;
}