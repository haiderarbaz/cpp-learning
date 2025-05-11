#include <iostream>

using namespace std;
int main(){

    int response;

    cout << "Enter the Tea Bags you have: ";
    cin >> response;

    while (response != 0)
    {
        cout << "You have " << response << " tea bags left." << endl;

        cout << "Enter the Tea Bags you have left: ";
    cin >> response;

        if(response == 0){
            cout << "You are out of bags." << endl;
        }
    }

    return 0;
    
}
