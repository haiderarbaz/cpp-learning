#include <iostream>

using namespace std;

int main(){

    int n, sum;

    cout << "Enter a number n: ";
    cin >> n;
    
    sum = n * (n + 1)/2;

    cout << "Sum of " << n << " natural no's is: " << sum << endl;

    return 0;
}