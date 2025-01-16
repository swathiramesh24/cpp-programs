#include<iostream>
#include<string>
using namespace std;

int main(){
  int score = 0;
  int option;
  string typeanswer;

  std::cout << "WELCOME TO TRIVIA QUIZ\n";
  
  std::cout << "\nLET'S BEGIN!";

  std::cout << "\n\nQuestion 1:\nWhat is the name of the world's longest river?\n1) Missouri River \n2) Nile\n3) Amazon River\n";
  std::cin >> option;

  if(option==2){
    std::cout << "\n\nCorrect!\n";
    score++;
  }
  else{
    std::cout << "\n\nThe correct answer is option 2";
  }

  std::cout << "\n\nQuestion 2\n How many bones are in the human body?\n1) 92\n2) 150\n3) 206\n ";
  std::cin >> option;

  if(option==3){
    std::cout << "\n\nCorrect!\n";
    score++;
  }
  else{
    std::cout << "\n\nThe correct answer is option 3";
  }

  std::cout << "\n\nQuestion 3\nWhat food never spoils?\nType your answer\n";
  cin.ignore();
  getline(cin,typeanswer);

  if(typeanswer=="honey" || typeanswer=="Honey" || typeanswer=="HONEY"){
      std::cout << "\n\nCorrect!\n";
      score++;
  }
  else{
    std::cout << "\n\nThe correct answer is honey\n";
  }

  std::cout << "\n\nYour score is:" << " " << score;

}
