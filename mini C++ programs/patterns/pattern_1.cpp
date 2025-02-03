/*

*
**
***
****
*****

*/

#include<iostream>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}


/* Self Explanation

first loop i=1 and 1<=5 condition true enters j loop
in j loop j=1 and 1<=1 so it print * again moves to j loop after incrementing
now j=2 2<=1 not satisfied. it forms a new line and enters inside i loop

second loop i=2 2<=5 condition true enters j loop
in j loop j=1 and 1<=2 it prints * and moves to j loop
again j=2 and 2<=2 again prints a * (now **)
now j=3 3<=2 not satisfied. it forms a new line and enters inside i loop

third loop i=3 3<=5 condition true enters j loop
in j loop j=1 and 1<=3 it prints * and moves to j loop
again j=2 and 2<=3 again prints a *
again j=3 and 3<=3 again prints a * now(***)
now j=4 4<=3 not satisfied. it forms a new line and enters inside i loop

fourth loop i=4 4<=5 condition true enters j loop
in j loop j=1 and 1<=4 it prints * and moves to j loop
again j=2 and 2<=4 again prints a *
again j=3 and 3<=4 again prints a * 
again j=4 and 4<=4 again prints a * (now ****)
now j=5 4<=4 not satisfied. it forms a new line and enters inside i loop

third loop i=5 5<=5 condition true enters j loop
in j loop j=1 and 1<=5 it prints * and moves to j loop
again j=2 and 2<=5 again prints a *
again j=3 and 3<=5 again prints a *
again j=4 and 3<=5 again prints a *
again j=5 and 3<=5 again prints a *
now j=6 6<=5 not satisfied. it forms a new line and enters inside i loop

in i loop i=6 i<=5 not satisfied so loop is exited and returns 0

*/

