#include <iostream>

using namespace std;

int main(){

    int chaiSale[3][7] = {
        {55, 77, 88, 45, 97, 34, 21}, // Shop 1 sales for 7 days
        {91, 45, 76, 68, 89, 35, 37}, // Shop 1 sales for 7 days
        {12, 71, 36, 82, 95, 76, 54}  // Shop 1 sales for 7 days
    };

    for(int i = 0; i < 3; i++){
        cout << "I am at Shop: " << i + 1 << "\n";
        for(int j = 0; j < 7; j++){
            cout << chaiSale[i][j] << " cups"; 
            if(j == 6){
                cout << "\n";
            }else{
                cout << " - ";
            }       
        }
    }


    return 0;
}