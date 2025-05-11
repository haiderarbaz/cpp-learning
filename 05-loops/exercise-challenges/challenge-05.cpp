#include <iostream>
#include <string>

using namespace std;

int main (){

    string days [7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string brewingTime[3] = {"Breakfast",  "Lunch", "Dinner"};
    string teaTypes[3] = {"Lemon tea", "Oolong Tea", "Adrak Tea"};


    for (int i = 0; i < 7; i++)
    {
        cout << "Tea brewing schedule for " << days[i] << ":" << endl;

        for (int j = 0; j < 3; j++)
        {
            cout << "For " << brewingTime[j] << " brew two cups of " << teaTypes[j] << endl;
                
                    
        }
        cout << endl;
    }
    

    return 0;
}