// Scope refers to the region until which a variable can be accessed.
//Scopes in C++ are as follows

//Global Scope - Can be accessed throughout the program

#include<iostream>
using namespace std;

int a=6; //global variable

void myFunction()
{
  cout << "Global variable inside the function is : " << a << endl; //Output : Global variable inside the function is : 6
}

int main()
{
  cout << "Global variable inside the main function is :" << a <<endl; //Output : Global variable inside the main function is : 6
  myFunction(); //Function is called
    
  a = 7; //directly modifying the global variable
  cout << "Global variable after modification is : " << a <<endl; //Output : Global variable after modification is : 7
  myFunction(); //Function called after modification

  return 0;
}

//Local Scope - Can be accesssed only within the block

#include<iostream>
using namespace std;

int main()
{
    int a=3; 
    {
        int b=76;
        int a=45; //a declared again in different scope
        cout<<a<<endl; //Output : 45 (Prints a in that scope rather than the outside value)
    }
    cout<<a<<endl; //Output: 3 (Prints the value declared in the main scope
    return 0;
}
  
