#include<iostream>
using namespace std;

int main()
{
  int guess, num;
  int tries = 0;

  srand(time(0));
  num = rand() % 100 + 1;

  std::cout << "Guess the Number!(1 to 100)" << std::endl;
  std::cout << "You have 5 chances!" << std::endl;
  

  for(int i=0; i<=5; i++){
    std::cout << "Enter your Guess : ";
    std::cin >> guess;
  
    if(guess==num){
      std::cout << "Correct!\n";
      std::cout << "You guessed the correct answer in " << tries;
      return 0;
    }

    else if(guess<num){
      std::cout << "Too Low! Try Again\n";
      tries++;
    }

    else{
      std::cout << "Too High! Try Again\n";
      tries++;
    }
  }
  std::cout << "Your chances have ended!\n";
}