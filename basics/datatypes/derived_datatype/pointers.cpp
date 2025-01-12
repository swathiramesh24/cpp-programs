//Pointer are symbolic representation of addresses of variables

#include<iostream>
using namespace std;

int main()
{
    int a = 3;    //declaring int 
    int *ptr;    // declaring pointer variable ptr
    ptr = &a;    // storing address of a in ptr
    
    cout << "The variable is :" << a << endl;          // The variable is : 3
    cout << "Address of a is :" << ptr << endl;        // Address of a is :0x7ffe506498d4  **can change**
    cout << "Value stored in ptr:" << *ptr << endl;    // Vlue stored in ptr : 3
    
    return 0;
}
