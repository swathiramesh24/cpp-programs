#include <iostream>
#include <cstdio>

int main() {
  srand(time(NULL));

  int fortune = std::rand() % 50;

  if(fortune==10){
    std::cout <<"Don't pursue happiness – create it";
  }

  else if(fortune==23){
    std::cout <<"All things are difficult before they are easy.";
  }

  else if(fortune==45){
    std::cout << "The early bird gets the worm, but the second mouse gets the cheese.";
  }

  else if(fortune==0){
    std::cout << "Someone in your life needs a letter from you.";
  }

  else if(fortune==31){
    std::cout << "The fortune you search for is in another cookie.";
  }

  else if(fortune==12){
    std::cout << "Help! I'm being held prisoner in a Chinese bakery!";
  }

  else{
    std::cout << "The fortune you search for is in another cookie!";
  }
}

