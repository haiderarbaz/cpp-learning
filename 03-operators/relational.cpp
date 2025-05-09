// Challenge: A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

#include <iostream>

using namespace std;

int main(){
    int cups;

    cout << "Enter the number of cups you have: \n";
    cin >> cups;

    if(cups > 20){
        cout << "You have GOLD badge" << endl;
    }
    else if(cups >= 10 && cups <= 20){
        cout << "You have SILVER badge" << endl;
    }
    else {
        cout << "You don't have any badge" << endl;
    }
    return 0;
}