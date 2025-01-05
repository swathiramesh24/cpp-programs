/* When the local variable is declared with the same name as that of the global variable,
  then the precedence is given to the local variable.
This phenomenon is called "Variable Shadowing". */

#include<iostream>
using namespace std;

int var=7; //global variable 

int main()
{
  int var=65; //local variable
  cout << var << endl;
  return 0;
}
//This function prints out the value of var as 65

//To access the global variable

#include<iostream>
using namespace std;

int var=7; //global variable 

int main()
{
  int var=65; //local variable
  cout << ::var << endl; //global variable 7 is printed
  return 0;
}
