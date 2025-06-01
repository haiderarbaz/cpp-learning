// static_cast
// float to int

#include <iostream>

using namespace std;

int main(){

    float pi = 3.1459;
    int whole = static_cast <int> (pi);

    cout << "Original float value: " << pi << endl;
    cout << "After static_cast in to int: " << whole << endl;

    return 0;
}