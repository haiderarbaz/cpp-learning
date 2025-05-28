#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float f = 3.1415926535f;
    double d = 3.1415926535;

    // default precison (usually 6 digits)
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;

    cout << fixed << setprecision(14) << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;

    return 0;
}