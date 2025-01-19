#include<iostream>
using namespace std;

int main()
{
  int a,b,temp;

  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "\nEnter b: ";
  std::cin >> b;

  std::cout << "\nValue of a before swapping " << a;
  std::cout << "\nValue of b before swapping " << b;

  temp=a;
  a=b;
  b=temp;

  std::cout << "\nValue of a after swapping " << a;
  std::cout << "\nValue of b after swapping " << b;

  return 0;
}