// Take uername and Display a Welcome message

#include <iostream>

using namespace std;

int main(){

    string str;

    cout << "May i know your name: ";
    // cin >> str; 
    // will read only one word.

    // if you want to read more than one word use getline
    getline(cin, str);

    cout << "Hello " << str << endl;

    return 0;
}