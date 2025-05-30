#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float f = 3.1415926535f;
    double d = 3.1415926535;

    float fpi = 3.1415926535f;
    double pi = 3.1415926535;

    // default precison (usually 6 digits)
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;

    // if you want to see full precision use (cout << fixed << setprecision(n) << endl;)
    cout << fixed << setprecision(14) << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;

    cout << "Without fixed: \n";
    cout << "Float: " << setprecision(14) << fpi << endl;
    cout << "Double: " << setprecision(14) << pi << endl;

    cout << "With fixed: \n";
    cout << "Float: " << fixed << setprecision(14) << fpi << endl;
    cout << "Double: " << fixed << setprecision(14) << pi << endl;

    return 0;
}