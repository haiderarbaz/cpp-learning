// how to take inut from user

#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    // ask which tea user want to have
    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    // ask for quatity
    cout << "How many cups of " << userTea << "would you like to have? \n";
    cin >> teaQuantity;

    cout << "You ordered " << teaQuantity << " cups of " << userTea << endl;
    

    return 0;
}