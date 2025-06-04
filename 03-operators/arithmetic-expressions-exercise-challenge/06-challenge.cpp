#include <iostream>

using namespace std;

int main(){

    float SI, P, R, T;

    cout << "Enter P, R, T value: ";
    cin >> P >> R >> T;

    SI = (P * R * T) / 100;

    cout << "Simple Interest is: " << SI << endl;


    return 0;


}