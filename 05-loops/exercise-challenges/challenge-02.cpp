#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main (){

    string response;    

    do
    {
        cout << "Do you want to add more sugar to your tea: ";
        cin >> response;

        transform(response.begin(), response.end(), response.begin(), ::tolower);
    } while (response != "enough");
    

    return 0;
}