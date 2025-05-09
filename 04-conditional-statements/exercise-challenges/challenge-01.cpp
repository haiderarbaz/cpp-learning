// Challenge 1: If Statement
// Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, "You have excellent taste!"

#include <iostream>
#include <string>

using namespace std;

int main(){

    string favouriteTea;

    cout << "Enter your favourite tea: ";
    getline(cin, favouriteTea);
;
    if (favouriteTea == "Oolong Tea"){
        cout << "You have excellent taste!" << endl;
    }

    return 0;
}