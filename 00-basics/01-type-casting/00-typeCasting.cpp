#include <iostream>

using namespace std;

int main (){

    int a = 10;
    float b = 3.5;

    // Implicit Casting
    float result = a + b;
    cout << "Implicit Result: " << result << endl;

    // Explicit Casting
    int explicitResult = a + (int) b;
    cout << "Explicit Result: " << explicitResult << endl;

    return 0;
}