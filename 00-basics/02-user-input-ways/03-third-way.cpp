// get() -> to read a single character including whitesapces

#include <iostream>

using namespace std;

int main(){

    char ch;

    cout << "Enter a character (white space allowed): ";

    ch = cin.get(); // Reads one character even if it's a space or new line

    cout << "You enterd: '" << ch << "'" << endl;


    return 0;
}