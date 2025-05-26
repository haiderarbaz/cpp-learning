#include <iostream>
using namespace std;

int add (int a, int b){
    return a + b;
}
int subtract (int a, int b){
    return a - b;
}
int multiply (int a, int b){
    return a * b;
}
float divide (int a, int b){
    if (b == 0){
        cout << "Cannot divide by zero \n";
        return 0;
    } else {
        return (float) a / b;
    }
}
int modulo (int a, int b){
    if (b == 0){
        cout << "Cannot divide by zero \n";
        return 0;
    } else {
        return  a / b;
    }
}
