#include <iostream>
using namespace std;

int main() {
    
    int age;
    bool citizen;
    bool registered;

   
    cout << "Enter your age: ";
    cin >> age;

    char citizenInput;
    cout << "Are you a citizen? (y/n): ";
    cin >> citizenInput;
    citizen = (citizenInput == 'y' || citizenInput == 'Y');

    char registeredInput;
    cout << "Are you registered to vote? (y/n): ";
    cin >> registeredInput;
    registered = (registeredInput == 'y' || registeredInput == 'Y');

    
    if (age >= 18 && citizen && registered) {
        cout << "You can vote! \U0001F5F3\n";
    } else if (age < 18) {
        cout << "You are not old enough to vote.\n";
    } else if (!citizen) {
        cout << "You are not eligible to vote.\n";
    } else if (!registered) {
        cout << "You need to register first.\n";
    } else {
        cout << "You have not met the requirements to vote.\n";
    }

    return 0;
}
