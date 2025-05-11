#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string response;

    while(true){

        cout << "Do you want more tea ? (type 'stop' if you want to exit): ";
        getline(cin, response);

        transform(response.begin(), response.end(), response.begin(), ::tolower);

        if(response == "stop"){
            break;

            
        }

       

        cout << "Here is your another cup of tea. \n";

    }
    cout << "No more tea will served to you." << endl;
    return 0;
}