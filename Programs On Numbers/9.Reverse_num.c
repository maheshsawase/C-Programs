/*
Programmer Name = Shelake Kalyani
Program Name = Program to reverse an integer number. (while loop)
Technology used = C
*/

#include <stdio.h>
int main()
{
   int n,rev=0,digit;
   
   printf("\n Enter a number:");
   scanf("%d",&n);
   
   while(n!=0)
   {
       digit=n%10;
       rev=rev*10+digit;
       n=n/10;
   }
   printf("\n Reverse number is = %d",rev);
}

/*
Output:

 Enter a number:1234

 Reverse number is = 4321
*/
