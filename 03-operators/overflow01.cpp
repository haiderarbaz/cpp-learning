#include<iostream>

using namespace std;

int main(){

    char x = 127;
    cout << "Before Overflow: " << (int) x << endl;

    x = x + 1;
    cout << "After Overflow: " << (int) x << endl;

    char y = -128;
    cout << "Before Overflow: " << (int) y<< endl; 

    y--;
    cout << "After Overflow: " << (int) y << endl;

    char z = 130;
    cout << (int) z << endl;
    z++;
    cout << (int) z << endl;

    return 0;
}