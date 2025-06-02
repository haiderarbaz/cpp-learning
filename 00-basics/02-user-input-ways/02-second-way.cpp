// getline() -> for full line with space

#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;

    cout << "Enter your name: ";

    getline(cin, name); // Takes full line input (spaces allowed)

    cout << "Hey, " << name << endl;
 


    return 0;
}