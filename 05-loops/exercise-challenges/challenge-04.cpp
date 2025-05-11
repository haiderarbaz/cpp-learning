#include <iostream>
#include <string>

using namespace std;

int main(){

    string teaTypes[7] = {"Oolong Tea", "Adrak Tea", "Herbal Tea", "Green Tea", "Black Tea", "No Tea", "Lemon Tea"};

    for (int i = 0; i < 7; i++)
    {
        if(teaTypes[i] == "Herbal Tea"){
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }
        if(teaTypes[i] == "No Tea"){
            cout << "Brewing " << teaTypes[i] << endl;
            break;
        }

        cout << "Brewing " << teaTypes[i] << endl;
    }
    

    return 0;
}