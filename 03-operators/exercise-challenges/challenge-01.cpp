// Challenge 1: Arithmetic Operators
// Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

#include <iostream>

using namespace std;

int main(){
    int teaPacks;
    int pricePerPack;

    cout << "Enter the number of tea packs you want: \n";
    cin >> teaPacks;
    cout << "Enter the price per pack: \n";
    cin >> pricePerPack;

    double totalPrice = teaPacks * pricePerPack;
    double finalCost = totalPrice + (totalPrice*10.0/100.0);

    cout << "The final cost of " << teaPacks << " number of tea packs is " << finalCost << endl;

    return 0;
}
