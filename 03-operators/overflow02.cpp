#include <iostream>
#include <climits>

using namespace std;

int main (){

    int num = INT_MAX;
    cout << "Before Overflow: " << num << endl;

    num++;
    cout << "After Overflow: " << num << endl;

    return 0;
}