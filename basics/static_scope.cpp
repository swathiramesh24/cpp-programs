//Static variables are local to the function but retain their values between function calls

#include<iostream>
using namespace std;

void myFunction()
{
    static int count=0; //static variable
    count++; //incrementation
    cout<< " The count is:" << count << endl;
}

int main()
{
    myFunction(); //The count is:1
    myFunction(); //The count is :2
    myFunction(); //The count is:3
    return 0;
    
}
//static variables maintain their value across multiple calls to the same function.


//Example without static variable

#include<iostream>
using namespace std;

void myFunction()
{
    static int count=0; //static variable
    count++;            //incrementation
    cout<< " The count is:" << count << endl;
}

int main()
{
    myFunction(); //The count is:1
    myFunction(); //The count is :1
    myFunction(); //The count is:1
    return 0;
    
}

//When static variable is not used the function resets everytime and starts as new from 0
