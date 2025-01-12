//A Structure is a user-defined data type in C/C++ that is used to store similar, different data types or a combination of both under a single variable

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Creating Structure using struct keyword
struct A{
    int a;
    float b;
    char c;
};

int main(){
    A t; // Creating instance for the structure
    
    t.a = 45; //int value
    t.b = 65.78; //float value
    t.c = 'h'; //char value
    
    cout << "int a:" << t.a << endl;    //int a:45
    cout << "float b:" << t.b << endl;  //float b:65.78
    cout << "char c:" << t.c << endl;   //char c=h
    
}

//Note: Though different datatypes are stored under the same name, the characteristics are still retained. The variables will take only the value of the datatype.
