// Example of what will happen when you wiill type cast large type to small ones?

#include<iostream>

using namespace std;

int main(){

    int num = 123456;
    char ch = num;

    cout << "Stored Value In Char: " << (int)ch << endl;

    return 0;
}