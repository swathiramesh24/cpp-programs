#include <iostream>

int main() {
  int level;

  std::cout <<"Enter your level" ;
  std::cin >> level;

  if(level<5)
  {
    std::cout << "You are in Bronze level";
  }
  else if(level<10){
    std::cout << "You are in Silver level";
  }
  else if(level<15){
    std::cout << "You are in Gold level";
  }
  else if(level<20){
    std::cout << "You are in Platinum level";
  }
  else{
    std::cout << "You are in Diamond level";
  }
  
}
