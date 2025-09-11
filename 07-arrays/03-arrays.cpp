#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size){

    int total=0;
    for(int i = 0; i < size; i++){
        total = total + chai[i];
    }
    return total;

}

int main(){

    int chaiServed[7] = {50, 75, 55, 70, 75, 80, 65};

    int total = totalChaiServed(chaiServed, 7);

    cout << "Total Chai Served: " << total << endl;;


    return 0;
}