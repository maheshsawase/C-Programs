/*
Programmer Name = Shelake Kalyani
Program Name = Program to check the given number  is positive, negative, eqal to zero or non numeric. (if-else-if ladder)
technology used  = C
*/

#include <stdio.h>
int main()
{
    int n;
    printf("\n Enter a number:");
    scanf("%d",&n);
    
        if(n>0)
      printf("\n given number is positive");
       else  if(n<0)
    printf("\n given number is negative");
         else if(n==0)
    printf("\n given number eqal to zero");
        else
    printf("\n given number is non numeric");
    return 0;    
}

/*
Output:

 Enter a number:7

 given number is positive
*/
