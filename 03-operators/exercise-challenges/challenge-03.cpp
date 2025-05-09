// Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include <iostream>

using namespace std;

int main (){

    int cups;
    bool isMember;
    
    cout << "Are you a member for more than a yera (0 for No and 1 for yes) ? \n";
    cin >> isMember;

    cout << "Enter the number of cups you have buy: \n";
    cin >> cups;

    

    if (isMember || cups > 12){
        cout << "Congratulations! You are Eligible for discount " << endl;
    } else {
        cout << "Sorry! You are NOT eligible for discount " << endl;
    }

    return 0;
}