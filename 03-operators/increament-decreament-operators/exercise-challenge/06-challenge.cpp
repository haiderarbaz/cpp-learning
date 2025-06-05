#include <iostream>

using namespace std;

int main(){

    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n; i > 0; i--){
        sum += i;
    }

    cout << "Sum from "
<< n << " to 1 is: " << sum << endl;
    return 0;
}
