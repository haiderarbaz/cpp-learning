#include <iostream>
#include "calculator.h"
using namespace std;

int main(){

    int a, b, choice;
    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "1.Add, 2.Subtract, 3.Multiply, 4.Divide, 5.Modulo \n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice){
        case 1: 
            cout << "Result: " << add(a,b);
            break;
        case 2: 
            cout << "Result: " << subtract(a,b);
            break;
        case 3: 
            cout << "Result: " << multiply(a,b);
            break;
        case 4: 
            cout << "Result: " << divide(a,b);
            break;
        case 5: 
            cout << "Result: " << modulo(a,b);
            break;
        default:
            cout << "Invalid Choice.";
    }


    return 0;
}