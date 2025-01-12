//Data types specify the type of data a variable can store
/* There are three types of datatypes namely
- basic datatypes -- int,float,double,char,bool,void
- derived datatypes -- array,pointer,reference,function
- user defined datatypes -- class,struct,union,typedef and using */

//BASIC DATATYPES

#include<iostream>
using namespace std;

int main()
{
    int integer_type; //int type
    float float_type; //float type
    double double_type; //double type
    char char_type; //char type
    bool bool_type; //bool type
    
    cout << "Size of int:" << sizeof(integer_type) << endl; //Size of int : 4
    cout << "Size of float:" << sizeof(float_type) << endl; //Size of float :4
    cout << "Size of double:" << sizeof(double_type) << endl; //Size of double : 8
    cout << "Size of char:" << sizeof(char_type) << endl; //Size of char : 1
    cout << "Size of bool:" << sizeof(bool_type) << endl; //Size of bool : 1
    
    return 0;
}
