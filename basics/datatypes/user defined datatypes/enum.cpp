/*an enum (short for enumeration) is a user-defined data type that allows you to create a set of named integer constants. 
It's a way to give meaningful names to a group of related values, making your code more readable and maintainable. */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Declaring enum
enum Color{Red, Blue, Black, Orange, Purple};

int main()
{

    //Creating a variable
    enum Color favourite;
    favourite = Black;   //declaring favourite color as black
    
    cout << "Favourite color is:" << favourite << endl;  //Favourite color is: 2
    return 0;
}

//This is more efficient as it more easy to search for 2 rather than searching black in the list.
