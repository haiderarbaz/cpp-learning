#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the ending number: ";
    cin >> n;

    int i = 1;
    while(i<=n){
        cout << i++ << " ";
    }


    return 0;
}