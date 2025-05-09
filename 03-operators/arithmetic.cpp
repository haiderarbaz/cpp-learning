// Challenge: Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.

#include <iostream>

using namespace std;

int main(){

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of Tea Cups: \n";
    cin >> cups;
    cout << "Enter the Price per Cups: \n";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // apply 5% discount if total price is above 150;
    if(totalPrice > 150){
        discountedPrice = totalPrice - (totalPrice*5.0/100.0);
        cout << "Discounted price is: " << discountedPrice << endl;
    }else {
        cout << "Total price is: " << totalPrice << endl;
    }       


    return 0;
}