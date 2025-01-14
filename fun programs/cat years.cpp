

#include <iostream>
#include <stdio.h>

int main() {
    
    int cat_age;
    int human_age;

    std::cout<< "Welcome to the Cat Years Program! This only works for cats older than 2 year!" << std::endl;
    std::cout<< "Enter your cat's age:";
    std::cin>> cat_age;

    human_age = (cat_age - 2)*4+24;

    std::cout << "Your cat is" << " " << human_age << " " << "years old in human years";

    return 0;
}
