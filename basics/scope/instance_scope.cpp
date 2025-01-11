//Instance Scope means they are declared inside the class but outside the function

#include<iostream>
using namespace std;

class A{
    public:
    int instancevar; //declared inside the class but outside the function
    
    A(int val){
        instancevar=val; 
    }
    void display(){
        cout <<instancevar <<endl; //function to display instance variable
    }
};

int main()
{
    A a1(1); //first instance 1 is stored
    a1.display(); //1
    
    A a2(90); //second instance 90 is stored
    a2.display(); //90
    
    A a3(3); //third instance 3 is stored
    a3.display(); //3
    return 0;
}

//The values are specific to the object because chaning the values does affect the previous values depicting instance nature



  
