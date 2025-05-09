// Challenge: Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.

#include <iostream>

using namespace std;

int main(){
    bool isStudent;
    int cups;
    cout << "Are you a student (1 for Yes and 0 for No) ? \n";
    cin >> isStudent;

    cout << "How many cups of tea have you purchased ? \n";
    cin >> cups;

    if (isStudent || cups > 15){
        cout << "You are eligible for a discount " << endl;
    } else {
        cout << "You are NOT eligible for discount " << endl;
    }

    return 0;
}