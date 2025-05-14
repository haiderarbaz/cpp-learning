#include <iostream>

using namespace std;

int main(){

    int chaiServed[7] = {50, 60, 55, 70, 75, 80, 65};
    int day[7] = {1, 2, 3, 4, 5, 6, 7};

    cout << "chaiServed: \n";
    for(int i = 0; i < 7; i++){
        cout << "Chai cups served on Day" << day[i] << ": " << chaiServed[i] << "\n";

    }

    return 0;
}