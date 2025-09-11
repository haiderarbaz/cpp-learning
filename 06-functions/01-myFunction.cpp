// Syntax:

// returnType functionNmae(parameters){

//     function body

// }

// returnType can be void, int, string, float or so on.


#include <iostream>

using namespace std;

int checkTemperature(int temperatur){
    return temperatur;
}

// Declaration of a function
void serveChai(int cups);


void makeChai(){
    cout << "Boiling water, adding tea leaves, straining....." << endl;
}

void serveChai (string teaTypes = "Masala Tea") { //Default Parameter

    int cups = 4; // Formal Parameter
    cout << "Serving " << teaTypes << endl;
}

int main(){
    int temp = checkTemperature(50);
    cout << temp << endl;

    serveChai(3);
    serveChai("Lemon Tea"); // Actual Parameter
    serveChai();
    makeChai(); // calling a function
    return 0;
}

// Definition of a function
void serveChai(int cups){
    cout << "Serving " << cups << " cups of chai." << endl; 
}