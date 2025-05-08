#include <iostream>

using namespace std;

int main(){
    
    float teaPrice = 49.99;

    int roundedTeaPrice = (int) teaPrice;

    int teaQuantity = 2;

    int totalPrice = teaPrice * teaQuantity;
    double totalPrice01 = teaPrice * teaQuantity;

    cout << teaPrice << endl;
    cout << roundedTeaPrice << endl;
    cout << totalPrice << endl;
    cout << totalPrice01 << endl;

    return 0;
} 