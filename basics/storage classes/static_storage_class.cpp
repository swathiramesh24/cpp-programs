//The static storage class has the ability to preseve the value of the variable even if it is out of scope


#include<iostream>
using namespace std;

int func()
{
    static int count = 0; //static variable
    count ++;
    return count;
}

int main()
{
    cout << "The count is :" << func() << endl; //The count is : 1
    cout << "The count is :" << func() << endl; //The count is : 2
    cout << "The count is :" << func() << endl; // The count is : 3
    return 0;
}
