// file input (ifstream)

#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream file("data.txt");
    int number;
    file >> number;
    cout << "Number from file: " << number << endl;
    file.close();
    
    return 0;
}