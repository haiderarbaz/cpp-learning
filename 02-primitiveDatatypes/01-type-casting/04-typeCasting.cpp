// static_cast
// int to char

#include<iostream>
#include <limits>

using namespace std;


// int main(){

//     int num = 123456;
//     char ch = static_cast <char> (num);

//     cout << "Result: " << ch << endl;

//     return 0;
// }

// Output:
// Result: 64

int main(){

    int num = 123456;

    if(num >= numeric_limits <char>::min() && num <= numeric_limits <char>::max()){
        char ch = static_cast <char> (num);
        cout << "Safe to cast: " << ch << endl;
    } else {
        cout << "Out of range for char, Casting may lose data. \n";
    }

    return 0;
}