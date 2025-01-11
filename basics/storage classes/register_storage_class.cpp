//Storage class is same as auto keyword, but the compiler tries to store the register of the microprocessor.
//It is more faster

#include<iostream>
using namespace std;

int main()
{
    register char a = 'A';
    cout << a << endl;
    return 0;
}

//C++17 does not allow the register keyword
