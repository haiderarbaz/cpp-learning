#include <iostream>

using namespace std;

int main(){

    int x = 7;
    int a = --x * 2;
    int b = x-- * 2;

    cout << "a (after --x * 2): " << a << endl;
    cout << "b (after x-- * 2): " << b << endl;
    cout << "Final value of x: " << x << endl;

    return 0;
}