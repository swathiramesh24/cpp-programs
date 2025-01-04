/* AUTO Keyword is a type of special keyword in c++. 
Instead of repeating the datatype of the identifiers everytime, the auto keyword automatically deduces the datatype of the variable by the entered value*/


#include<bits/stdc++.h>
using namespace std; //creating of region to define identifers

int main()
{
    auto a_int=23;
    auto b_float=24.6;
    auto c_double=25.6666;
    auto d_bool=true;
    auto e_char='A';
    
    cout<< a_int << endl;
    cout<< b_float << endl;
    cout<< c_double << endl;
    cout<< d_bool << endl;
    cout<< e_char << endl;
    
    return 0;
}
