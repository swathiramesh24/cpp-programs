#include <iostream>
#include <cstdio>

int main() {
  srand(time(NULL));

  int dice = std::rand() % 6;

  std::cout << "You have rolled" << " " << dice;

  if(dice==0){
    std::cout << "\nYou have lost a chance";
  }
  
}
