#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float distance, x1, y1, x2, y2;
    
    cout << "Enter coordinates of first point (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x2, y2): ";
    cin >> x2 >> y2;

    distance = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
    cout << "Distance between two points is: " << distance << endl;

    return 0;
}