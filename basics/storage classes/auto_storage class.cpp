/* Auto kryword is used to store various datatypes under a common name. these datatypes are declared with the auto keyword which automatically
assigns its actual data type and outputs without any error.
In c++11 meaning of auto keyword is changed and cannot be used*/

#include<iostream>
using namespace std;

int main()
{
    auto a = 5; //int
    auto b = 6.78; //float
    auto c = 'A'; //char
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
    
}
