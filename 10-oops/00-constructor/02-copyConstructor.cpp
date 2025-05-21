#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:

    string* teaName; // teaName is a pointer to a string. We'll dynamically allocate memory for this.
    int servings;
    vector<string> ingredients;

    // parametrized constructor
    // Used to initialize a Chai object with a name, servings, and ingredients
    Chai(string name, int serve, vector<string> ingr){
        teaName = new string(name); // here we Allocated memory dynamically for teaName and assign value
        servings = serve;
        ingredients = ingr;
        cout << "Parametrized Constructor Called" << endl;
    };

    // copy constryctor: A copy constructor is a special constructor in C++ used to create a new object as a copy of an existing object.
    // This is called when a new object is created as a copy of an existing object
    // copy constructor declaration
    Chai(const Chai& other){
        //Create a new memory location and copy the value of teaName
        teaName = new string (*other.teaName); // deep copy of teaName
        servings = other.servings; // copy primitive type
        ingredients = other.ingredients; // vector supports copy by value
        cout << "Copy Constructor Called" << endl;
    }

    // Chai           // Constructor name (same as class)
    // (const Chai&   // It takes a **reference to a const object** of the same class
    //  other)        // 'other' is the object we are copying from

    // Why Use const Chai& other?

    // const → To prevent accidental modification of the original object during copying.
    // & (reference) → To avoid copying the whole object when passing it; improves performance.
    // other → This is just a name (you can use anything). It's the object you're copying from.

    // destructor 
    // Called when an object is destroyed (goes out of scope or deleted)
    ~Chai(){
        delete teaName; // free dynamically allocated memory to prevent memory leak
        cout << "Destructor Called" << endl;
    }

    // Display function to print all chai details
    void displayChaiDetails(){
        cout << "Tea Name: " << *teaName << endl;
        cout << "Tea Servings: " << servings << endl;
        cout << "Ingredients: " ;
        for (string ingredient : ingredients){
            cout << ingredient << ", ";
        }
        cout << endl;
    }


};

int main(){

    // Create an object using the parameterized constructor
    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});
    lemonTea.displayChaiDetails();

    // Copy the Object // Create a copy of lemonTea using the copy constructor
    Chai copiedChai =lemonTea; //This line calls the copy constructor, because copiedChai is being initialized with another object (lemonTea).
    copiedChai.displayChaiDetails();

    // So Copy Constructor Creates a completely independent copy, especially important since teaName is a pointer.

    // Modify original teaName to see if copied object changes (it shouldn't)
    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "Lemon Tea -------" << endl;
    lemonTea.displayChaiDetails();
    cout << "Copied Tea -------" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}

// Without a custom copy constructor, the default one would copy the pointer — both objects would point to the same memory (shallow copy).

// With the custom deep copy constructor, we allocate new memory and copy the content. So both lemonTea and copiedChai have independent teaName values.

// When we change lemonTea.teaName, it doesn’t affect copiedChai.teaName because they point to different memory.