#include <iostream>
#include <stdio.h>

int main() {
    double month_1;
    double month_2;
    double MoM;

    std::cout << "Enter First Month's Measure:" ;
    std::cin >> month_1;

    std::cout << "Enter Second Month's Measure:" ;
    std::cin >> month_2;

   MoM = ((month_2 - month_1)/(month_1)) * 100;

   std::cout << "The Month over Month Value is:" << " " << MoM ;
    return 0;
}
