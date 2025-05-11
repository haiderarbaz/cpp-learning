#include <iostream>

using namespace std;

int main(){

    int num=2;
    int total =0;

    for(int i = 1; i <= 10; i++){

        int bags = num * i;

        cout << "Batch " << i << ": " << bags << " tea bags" << endl;
        total += bags;


    }

    cout << "The total tea bags required for making batches of tea is: " << total << endl;

    return 0;
}