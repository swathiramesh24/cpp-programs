//Reference means giving a nickname to the already existing variable
//Any changes made in either the variable or the reference variable will make a change in both of them
//It saves memeory and time by avoiding copy of large data

#include<iostream>
using namespace std;

int main()
{
    int x = 10;      // Actual variable with value of 10
    int &ref = x;    // Reference variable that stores the value of x
    
    cout << "Value in x:" << x << endl;      //Value in x: 10
    cout << "Value in ref " << ref << endl;  //Value in ref: 10
    
    ref = 20;                                // Value in ref changes to 20
    cout << "Value in x:" << x << endl;      // Value in x: 20
    cout << "Value in ref " << ref << endl;  // Value in ref: 20
    
    x = 30;                                  // Value in x changes to 30
    cout << "Value in x:" << x << endl;      // Value in x: 30
    cout << "Value in ref " << ref << endl;  //Value in ref: 30
    
    return 0;
    
}
