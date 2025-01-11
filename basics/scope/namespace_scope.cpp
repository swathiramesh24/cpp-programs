//It is used to avoid naming conflicts, especially in large projects or when using third-party libraries.
//Members declared inside a namespace have their scope limited to that namespace.

#include <iostream>

// Declare a namespace
namespace MyNamespace {
    int var = 10; // Variable in the namespace

    void display() { // Function in the namespace
        std::cout << "Value of var in MyNamespace: " << var << std::endl;
    }
}

// Global variable with the same name
int var = 20;

int main() {
    // Access the global variable
    std::cout << "Value of global var: " << var << std::endl;

    // Access the variable inside the namespace using the scope resolution operator
    std::cout << "Value of var in MyNamespace: " << MyNamespace::var << std::endl;

    // Call the function inside the namespace
    MyNamespace::display();

    return 0;
}
