// Challenge 3:

// Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.

// > Hint: Combine cin and getline carefully to avoid input issues.

#include <iostream>
#include <string>

using namespace std;

int main(){

    string userTea;
    int teaQuantity;

    cout << "What would you like to order in Tea? \n";
    getline(cin, userTea);

    cout << "How many Cups of " << userTea << " would you have? \n";
    cin >> teaQuantity;

    cout << "You ordered " << teaQuantity << " Cups of \"" << userTea << "\"" << endl;

    return 0;
}
