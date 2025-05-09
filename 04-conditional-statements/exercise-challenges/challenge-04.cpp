// Challenge 4: Switch Case
// Write a program that offers different tea brewing methods. The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), and the program prints the instructions for the selected brewing method. Use a switch statement to handle the selections.

#include <iostream>

using namespace std;

int main(){

    int choice;

    cout << "Select your brewing methods\n";
    cout << "1. Boiling\n";
    cout << "2. Steeping\n";
    cout << "3. Iced tea\n";
    cout << "Enter your choice in number: \n";
    cin >> choice;

    switch (choice){
    case 1:
        cout << "You have selected \"Boiling\" brewing method." << endl;
        break;
    case 2:
        cout << "You have selected \"Steeping\" brewing method." << endl;
        break;
    case 3:
        cout << "You have selected \"Iced Tea\" brewing method." << endl;
        break;
    
    default:
        cout << "\"Inavlid Choice\"" << endl;
        break;
    }


    return 0;
}