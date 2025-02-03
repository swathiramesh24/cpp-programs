#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

char getComputerMove()
{
  int move;
  move = rand() % 3;

  if(move == 0)
  {
    return 'p';
  }

  else if(move == 1)
  {
    return 's';
  }
  return 'r';
}

int resultofTwo(char playerMove, char computerMove)
{
  if(playerMove == computerMove)
  {
    return 0;
  }

  else if(playerMove == 's' && computerMove == 'p')
  {
    return 1;
  }

  else if(playerMove == 's' && computerMove == 'r')
  {
    return -1;
  }

  else if(playerMove == 'p' && computerMove == 'r')
  {
    return 1;
  }

  else if(playerMove == 'p' && computerMove == 's')
  {
    return -1;
  }

  else if(playerMove == 'r' && computerMove == 's')
  {
    return 1;
  }

  else if(playerMove == 'r' && computerMove == 'p')
  {
    return -1;
  }
  return 0;
}

int main()
{
  char playerMove;
  int score=0; 
  char choice;
  srand(time(NULL));
  
  do{
  std::cout << "\t\t*****Welcome to Rock, Paper and Scissors Game*****\t\t" << "\n";
  std::cout << "Enter your Choice(r,p,s): " ;

  while(1)
  {
    std::cin >> playerMove;
    if(playerMove =='s' || playerMove =='p' || playerMove =='r' )
    {
      break;
    }
    else{
      std::cout << "Enter a valid choice!" << "\n";
    }
  }

  char computerMove = getComputerMove();

  int result = resultofTwo(playerMove, computerMove);


  if(result==0){
    std::cout << "\t\t\t\t\t\t\t Oh! It's a draw\n";
  }

  else if(result==1)
  {
    std::cout << "\t\t\t\t\t\t\t You Won!\n";
    score++;
  }

  else{
    std::cout << "\t\t\t\t\t\t\t The computer won\n";
  }

  std::cout << "\t\t\t\t\t\t\t Your Move: " << playerMove << "\n";
  std::cout << "\t\t\t\t\t\t\t Computer's Move: " << computerMove << "\n";
  
  std::cout << "Do you want to play again? (Yes/No): ";
  std::cin >> choice;
  }while(choice=='Y' || choice=='y');
  
  std::cout << "Your score is " << score;
  return 0;
}
