/* The "const keyword is used to declare constant values to identifiers.
  These values cannot be changed again in the program.
  There are two ways to declare a constant in a program.
  NOTE: The "const" keyword should be initialized along with declaration, because if it is only declared it stores a 
  "garbage value" which cannot be changed*/

//First way declaring in the main function i.e. local scope

#include<iostream>
using namespace std;

int main()
{
  const int a=5; //constant value 5 is stored in a. If it is changed furthur error will be displayed
  cout<< a << endl;
  return 0;
}


//Second way declaring outside the main function i.e. global scope

#include<iostream>
using namespace std;

const int a=5; //constant value 5 is stored in a. If it is changed furthur inside the main function error will be displayed

int main()
{
  cout<< a << endl;
  return 0;
}

