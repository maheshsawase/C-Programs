/*
Programmer Name = Shelake Kalyani
Program Name = program o calculate factorial of a given number.
Technology used = C
*/

#include <stdio.h>
int main()
{
    int n,fact=1,i;
    
    printf("\n Enter any number to find factorial: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("\n Factorial of a given number is %d",fact);
}

/*
Output:

 Enter any numberto find factorial: 4

 Factorial of a given number is 24
*/
