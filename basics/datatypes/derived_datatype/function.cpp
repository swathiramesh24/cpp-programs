//A function is a block of code/program segement that is defined to perform a specific well defined task

#include<iostream>
using namespace std;

int max_func(int x, int y) //Defining the function with two arguments x and y
{
    if(x>y)
     return x;
                    // Function logic to return the maximum number in the given parameters
    else
     return y;
}

int main()
{
  //giving value for the arguments
    int a = 12;
    int b = 15;

  //calling the function max_func by passing a and b
    int max_num = max_func(a,b);
    
    cout << "The largest number is:" << max_num << endl; //The largest number is : 15
    return 0;
}
