// Used to modify one or more data members of class/ struct without changing the other

#include<iostream>
using namespace std;

class A{
    public:
      int x;
      mutable int y; //can be modified
      
      A():x(4), y(19){}
};

int main()
{
    const A a;
    a.y = 29; //y variable is modified
    cout << a.y << endl;
    return 0;
}
