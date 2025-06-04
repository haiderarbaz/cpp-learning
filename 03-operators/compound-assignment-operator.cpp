#include <iostream>

using namespace std;

int main(){

    int sum = 10, x = 5, prod = 4, y = 3; 

    sum += x;
    cout << "Sum is: " << sum << endl;

    prod *= y;
    cout << "Product is: " << prod << endl;

    x += 1;
    cout << "Sum of x + 1 is: " << x << endl;

    y -=1;
    cout << "Sub from y - 1 is: " << y << endl;
    
    return 0;
}