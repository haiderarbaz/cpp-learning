#include <iostream>

using namespace std;

int main(){

    int teaCups;
    cout << "Enter the number of tea cups you want: ";
    cin >> teaCups;

    for (int i = 0; i < teaCups; i++)
    {
        cout << "Brewing cup " << i <<  " of tea..." << endl;
    }

    // this "i" will not be accesible because of scope

    cout << "Brewing Done" << endl;

    return 0;
}