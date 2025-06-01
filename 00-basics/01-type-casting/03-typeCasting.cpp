// Use type limits from <limits> header
// You can check the range of a type before assigning

#include <iostream>
#include <limits>

using namespace std;
int main(){

    int num = 123456;

    if(num >= numeric_limits <char>::min() && num <= numeric_limits <char>::max()){
        char ch = (char) num;
        cout << "Safe to cast: " << (int)ch << endl;
    } else {
        cout << "Out of range for char, Casting may lose data. \n";
    }

    return 0;
}