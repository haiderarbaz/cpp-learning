#include <iostream>
#include <string>

using namespace std;

int main(){

    string favouriteChai = "Irani Chai";
    string description = " is known as Best Chai";
    string originCountry = "of \"Iran\" \n";
    string comments = "But not everone can prepare like the Original taste";

    cout << favouriteChai << endl;
    cout << favouriteChai << description << endl;
    cout << favouriteChai << description << originCountry << endl;
    cout << favouriteChai << description << originCountry << comments << endl; 

    return 0;
}