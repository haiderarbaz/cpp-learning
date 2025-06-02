// static_cast
// int to double 

#include <iostream>
#include <limits>

using namespace std;

int main(){

    int x = 10;
    
    if(x >= numeric_limits <double>::min() && x <= numeric_limits <double>::max()){
        double y = static_cast<double>(x)/3;
        cout << "Safe to cast: " << y << endl;
    } else {
        cout << "Out of Range for double, casting may lose data." << endl;
    }

    return 0;
}