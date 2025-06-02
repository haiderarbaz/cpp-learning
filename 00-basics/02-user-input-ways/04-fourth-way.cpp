// cin.getline() -> for c-style character arrays

#include <iostream>

using namespace std;

int main(){

    char address [50]; // C-Style character array
    cout << "Enter your address: ";

    cin.getline(address, 50); // Reads upto 49 character + 1 for '\0' (null terminator)

    cout << "User is from: " << address << endl;


    return 0;
}