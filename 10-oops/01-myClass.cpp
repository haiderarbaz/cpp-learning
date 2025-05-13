#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public: 
        // Data members (attributes)
        string teaName; // Name of the tea
        int servings; // Number of serving
        vector<string> ingredients; //List of ingredients for the tea

        // Member Function or Method (Functionality Declare)
        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Tea Servings: " << servings << endl;
            cout << "Ingredients: " ;
            for (string ingredient : ingredients){
                cout << ingredient << ", ";
            }
            cout << endl;
        }
    
};

int main(){

    Chai myChai01;

    myChai01.teaName = "Lemon Tea";
    myChai01.servings = 6;
    myChai01.ingredients = {"Water", "Lemon", "Honey", "Sugar", "Tea"};

    myChai01.displayChaiDetails();

    cout << endl;

    Chai myChai02;

    myChai02.teaName = "Masala Chai";
    myChai02.servings = 6;
    myChai02.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};
    
    myChai02.displayChaiDetails();

    return 0;
}