/* In C++, a class is a user-defined data type that acts as a blueprint for creating objects.
  It encapsulates data members (variables) and member functions (methods) that operate on the data.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Creating a class
class Greet{
  public:

    //creating a variable string
    string name;

    //Creating a function that greets the name whenever called
    void greetName(){
      cout<< "Hello!" << " " << name << endl;
    }
};

int main(){
  //Creating an object in the class
  Greet g;

  //Assigning a value
  g.name = "Swathi";

  //Calling the function
  g.greetName();
  return 0;
}







    
