#include <iostream>

using namespace std;

int main(){

    float radius, height, volume;

    cout << "Enter radius and height: ";
    cin >> radius >> height;

    volume = 3.145f * radius * height;

    cout << "Volume of the circle is: " << volume << endl;

    return 0;
}