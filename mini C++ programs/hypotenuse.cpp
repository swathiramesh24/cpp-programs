#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  double side1, side2, hypotenuse;

  std::cout << "Enter First Side" << std::endl;
  std::cin >> side1;

  std::cout << "Enter Second Side" << std::endl;
  std::cin >> side2;

  hypotenuse = sqrt(pow(side1,2) + pow(side2,2));

  std::cout << "The hypotenuse is: " << hypotenuse << std::endl;
  return 0;

}