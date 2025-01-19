#include<iostream>
using namespace std;

int main()
{
  int num;
  int product=1;

  std::cout << "Enter a number to find the table: ";
  std::cin >> num;

  for(int i=1; i<=10; i++)
  {
    product = num*i;
    std::cout << num << " * " << i << " = " << product << "\n";
  }

  return 0;
}