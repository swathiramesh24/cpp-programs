//extern storage class defines a variable elsewhere
//it can be accessed by two different files at the same time

//consider file 1
int a = 290;

//consider file 2

#include<iostream>
using namespace std;

//external variable
extern int a;

int main()
{
  cout << a << endl; //the value of a in file 1 i.e. 290 will be printed
  return 0;
}

\* Characteristics:
- Global Scope
- Zero Value
- Storage in RAM
- Scope tille the end of the program */
