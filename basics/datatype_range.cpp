//Memorizing range of every datatype can difficult. So c++ uses <climits> for finding the range of datatype.
//This program is based on the derived from C for basic datatypes

#include<iostream>
#include<climits>  //For int, char macros
#include<cfloat>   //For float, double macros

using namespace std;

int main()
{
    cout << "Int ranges from" << " " << INT_MIN << " " << "to" << " " << INT_MAX << endl; 
    cout << "Float ranges from" << " " << FLT_MIN << " " << "to" << " " << FLT_MAX << endl;
    cout << "Double ranges from" << " " << DBL_MIN << " " << "to" << " " << DBL_MAX << endl;
    cout << "Char ranges from" << " " << CHAR_MIN << " " << "to" << " " << CHAR_MAX << endl;
    return 0;
}

/* OUTPUT:
Int ranges from -2147483648 to 2147483647
Float ranges from 1.17549e-38 to 3.40282e+38
Double ranges from 2.22507e-308 to 1.79769e+308
Char ranges from -128 to 127
*/

//Same follows for all other datatypes expect for the keyword used.
