#include <iostream>

using namespace std;

int add (int a , int b){
    return a + b;
}
int subtract (int a , int b){
    return a -b;
}
int multiply(int a, int b){
    return a * b;
}
float divide (int a, int b){
    if(b==0){
        cout << "cannot divide by zero \n";
        return 0;
    } else {
        return (float) a / b;
    }
}
int modulo(int a, int b){
    if(b==0){
        cout << "cannot divide by zero";
        return 0;
    } else {
        return a % b;
    }
}

int main(){

    int a, b, choice;
    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "1.Add, 2.Subtract, 3.Multiply, 4.Divide, 5.Modulo \n";
    cout  << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1: 
            cout << "Result: " << add(a, b);
            break;
        case 2:
            cout << "Result: " << subtract(a, b);
            break;
        case 3:
            cout << "Result: " << multiply(a, b);
            break;
        case 4:
            cout << "Result: " << divide(a, b);
            break;
        case 5:
            cout << "Result: " << modulo(a, b);
            break;
        default:
            cout << "Invalid Choice";

    }

    return 0;
}