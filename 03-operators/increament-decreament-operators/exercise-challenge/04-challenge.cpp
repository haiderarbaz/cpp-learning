#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n-- > 0){
        cout << n + 1 << " " << endl;
    }
    
    return 0;
}