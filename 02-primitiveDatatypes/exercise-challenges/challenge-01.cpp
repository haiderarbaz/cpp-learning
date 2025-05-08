// Challenge 1:

// Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.

// > Hint: Use \n for new lines and \" to quote the tea name.

#include <iostream>
#include <string>

using namespace std;

int main(){

    string teaType1 = "Green Tea";
    string teaType2 = "Lemon Tea";
    string teaType3 = "Black Tea";
    string teaType4 = "Oolong Tea";
    string teaType5 = "Adrak Chai";

    float teaType1PricePerKg = 199.99;
    float teaType2PricePerKg = 129.99;
    float teaType3PricePerKg = 399.99;
    float teaType4PricePerKg = 499.99;
    float teaType5PricePerKg = 699.99;

    char teaType1Rating = 'A';
    char teaType2Rating = 'B';
    char teaType3Rating = 'C';
    char teaType4Rating = 'D';
    char teaType5Rating = 'E';

    cout << "Tea-type: \"" << teaType1 << "\"\nPrice per KG: ₹" << teaType1PricePerKg << "\nRating is: " << teaType1Rating << "\n\n";
    cout << "Tea-type: \"" << teaType2 << "\"\nPrice per KG: ₹" << teaType2PricePerKg << "\nRating is: " << teaType2Rating << "\n\n";
    cout << "Tea-type: \"" << teaType3 << "\"\nPrice per KG: ₹" << teaType3PricePerKg << "\nRating is: " << teaType3Rating << "\n\n";
    cout << "Tea-type: \"" << teaType4 << "\"\nPrice per KG: ₹" << teaType4PricePerKg << "\nRating is: " << teaType4Rating << "\n\n";
    cout << "Tea-type: \"" << teaType5 << "\"\nPrice per KG: ₹" << teaType5PricePerKg << "\nRating is: " << teaType5Rating << "\n\n";

    return 0;
}