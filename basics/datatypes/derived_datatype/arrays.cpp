//An array is collection of items stored at continous memory locations
//This program shows how an array is printed using for loop and how can the sum of elements in array can be found

#include<iostream>
using namespace std;

int main()
{

//Declaring an array
  int arr[5] = {1,2,3,4,5};

  int sum;                                       //declaring sum variable to store the sum of elements

  
//printing elements of the array using for loop
cout << "The elements of the array are : " << endl;
  
for(int i=0; i<5; i++)
{
  cout << "arr[" <<i<< "] = " << arr[i] << endl;
}

  
//finding sum of the elements
for(int i=0; i<5; i++)
{
  sum += arr[i]; //sum=sum+arr[5]
}
cout << " The sum of elements is :" << sum << endl; //The sum of elements is : 15
return 0;
}



/* Note:
>> The term "arr["<<i<<"]=" is a string literal that prints arr[0/1/2/3/4] which inserts the current index of i
>> The cout statement in finding sum is outside the loop because everytime the loop runs the value is stored in sum and can be printed as a whole outiside the loop
>> The sum operation should be like "sum += arr[i];" not "sum+ = arr[i]". The operator "+=" should stick together
>> The term "int sum;" can also initialized with 0 as "int sum=0;"
*/
