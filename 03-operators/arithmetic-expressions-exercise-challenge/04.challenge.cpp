#include<iostream>

using namespace std;

int main(){

    float area, r;

    cout << "Enter radius of Circle: ";
    cin >> r;

    area = 3.145f * r * r;

    cout << "Area of Circle is: " << area << endl;

    return 0;
}