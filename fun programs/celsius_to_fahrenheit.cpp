
#include <iostream>


int main() {
    
    double fahrenheit_temp;
    double celsius_temp;
  
    std::cout << "Enter temperature in fahrenheit:";
  
    std::cin >> fahrenheit_temp;

    celsius_temp = (fahrenheit_temp-32)/1.8;

    std::cout << "The celsius temperature is:" <<" " << celsius_temp << "`C";

    return 0;
}
