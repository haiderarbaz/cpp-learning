#include <iostream>
#include <string>
#include <algorithm> // for transform

using namespace std;

int main (){

    string response;

    do
    {
        cout << "Do you want more tea (reply in yes/no): ";
        getline(cin, response);

        // convert to lowercase
        transform(response.begin(), response.end(), response.begin(), ::tolower);
    }
    while (response != "no");
    // exit when they say NO
    
    // while (response == "yes" || response == "Yes");
    // keep asking only if they keep saying YES.
    


    return 0;
}