#include <iostream>
using namespace std;

int main(){

    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add, 2.Subtract, 3.Multily, 4.Divide, 5.Modulus /n";
    cout << "Enter Your Choice: ";
    cin >> choice;

    if(choice == 1){
        cout << "Result: " << (a + b) << endl;
    }
    else if(choice == 2){
        cout << "Result: " << (a - b) << endl;
    }
    else if(choice == 3){
        cout << "Result: " << (a * b) << endl;
    }
    else if(choice == 4 && b != 0){
        cout << "Result: " << (a / b) << endl;
    }
    else if(choice == 5 && b != 0){
        cout << "Result: " << (a % b) << endl;
    }
    else {
        cout << "Invalid Choice or divide by zero. Please choice from the mentioned only.";
    }

    return 0;
}