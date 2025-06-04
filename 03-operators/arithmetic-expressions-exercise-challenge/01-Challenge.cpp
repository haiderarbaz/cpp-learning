#include<iostream>

using namespace std;

int main(){

    int base, height;
    float area;

    cout << "Enter base & height: ";
    cin >> base >> height;

    area = (base * height)/2;

    cout << "Area of Triangle is: " << area << endl;

    return 0;
}