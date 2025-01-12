//typedef means giving a new name to already existing datatype
//The using keyword allows to specify the use of a particular namespace.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//float function is assigned to f
typedef float f;

// i is used instead of int
using i = int;

int main()
{
    f num1 = 56.78;
    i num2 = 67;
    
    cout << "Float value:" << num1 << endl; //Float value:56.78
    cout << "Int value:" << num2 << endl;   //Int value:67
    return 0;
}

//Note that float and int are used as f and i respectively but there is no error in the declaration or the output
