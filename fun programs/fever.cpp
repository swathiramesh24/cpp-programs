#include <iostream>

int main() {
  float temp;

  std::cout << "What's your temperature?";
  std::cin >> temp;

  if(temp>100)
  {
    std::cout <<"You have a fever";
  }
  
  else{
    std::cout << "You don't have a fever";
  }
}
