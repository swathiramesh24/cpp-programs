#include<iostream>
#include<cstdlib>

int main()
{
    srand(time(NULL));

    int num = std::rand() %2; //creates random numbers. modulus of 2 gives either 0 or 1

    if(num>0.5){
        std::cout << "Heads!\n";
    }

    else{
        std::cout << "Tails!\n";
    }
}
