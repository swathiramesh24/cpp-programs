//A union in C++ is a data structure that allows different data types to be stored in the same memory location.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Creating a union using union keyword
union A{
    int a;
    char b;
};

int main()
{
    A t; //Instance for the union
    
    t.b = 'B'; //Only char is assigned value
    
    cout << "int a:" << t.a << endl; //int a:66
    cout << "char b:" << t.b << endl; //char b:B
    return 0;
}

//Note that int a has not been assigned any value but still it has been printed
//This is because both int and char are stored in the same memory and hence the equivalent int value of B is printed
