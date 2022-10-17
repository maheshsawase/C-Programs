/*
Programmer Name = Shelake Kalyani
Program Name = Program to calculate the sum of squares of all integers between 1 and 10. (while loop)
Technology used = C
*/

#include <stdio.h>
int main()
{
    int n=1,sum=0;
    
    while(n<=10)
    {
    sum = sum+n*n;
    n++;
    }
    
    printf("\n sum is %d",sum);
}

/*
Output:
 sum is 385
*/
