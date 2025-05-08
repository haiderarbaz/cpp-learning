// Challenge 2:

// Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

// > Hint: Use both float and int types, and demonstrate type casting.

#include <iostream>
#include <string>

using namespace std;

int main (){

    float userEnteredPrice;

    // Take input as a user base price
    cout << "Enter your base price for tea: \n";
    cin >> userEnteredPrice;

    // imcreased it by 10%
    float originalPrice = userEnteredPrice + (userEnteredPrice*10.0/100.0);

    // round ew price using explicit casting
    int roundedNewPrice = (int) originalPrice;

    cout << "Price increased by 10%: " << originalPrice << endl;

    cout << "New price is: " << roundedNewPrice;


    return 0;
}