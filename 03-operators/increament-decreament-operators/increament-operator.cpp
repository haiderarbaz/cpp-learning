#include <iostream>

using namespace std;

int main(){

    int i = 5, j=5, k;
    int a = 5, b;
    int c = 5, d;
    int x = 6;
    
    // i = i + 1;
    // OR
    // i += 1;
    // OR

    // post-increament
    i++; // output will be: 6
    cout << "After post-increament with 1, i value is: " << i << endl;

    // pre-increament
    ++i; // Here i value is 6
    cout << "After pre-increament with 1, i value is: " << i << endl;

    k = j++; // first k will be assign 5 then j will increase by 1 so j will be 6
    cout << "After j increament with 1\n" << "k value is: " << k << "\n" << "j value is: " << j << endl;

    k = ++j; // here j value is: 6, first j will increase by 1 so j will be 7 then k will be assign with j value so it will be 7
    cout << "After i increament with 1\n" << "j value is: " << j << "\n" << "i value is: " << i << endl;

    b = 2 * ++a + 2 * a++; // in first half "a" will increase by "1" then it will be multiply by "2" so first half will be "12", then "2" will multilpy by current value of "a" which is "6" so other half will also be "12" then "a" will increase by "1" so it will be "7" and b value will be "12 + 12 = 24".
    cout << "a is: " << a << "\n" << "b is: " << b << endl;

    d = 2 * c++ + 2 * ++c; // in first half "2" will be multiply by current value of "c" i.e; "5" so first half will be "10", then in second half "c" will increase by "1" so it's value will be "6" and then "6" will be multiply "12" so d will be "22" and "c" will be "6"
    cout << "c is: " << c << "\n" << "d is: " << d << endl;

    /*
        Note: 
        This both of the below code involves undefined behavior in C++.

            b = 2 * ++a + 2 * a++;
            d = 2 * c++ + 2 * ++c; 

            Why It's Undefined Behavior?
                In C++, modifying a variable (a) more than once between two sequence points (like in one statement) without an intervening sequence point (like ;) leads to undefined behavior.

                So technically, the result is not guaranteed and can vary between compilers.

            Avoid writing such code. Even though your reasoning is logical, compilers may not behave consistently because:
                Modifying a variable more than once without sequence points = Undefined Behavior in C++.
    
    */

    return 0;
}