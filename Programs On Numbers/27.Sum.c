/*
Programmer Name = Shelake Kalyani
Program Name = Program to input a number and calculate sum of digits.
Technology used = C
*/

#include <stdio.h>
int main()
{
   int num,sum=0;
   
   printf("\n Enter a any number to calculate sum of digit :");
   scanf("%d",&num);
   
   while(num!=0)
   {
       sum = sum+num%10;
       num = num/10;
   }
   printf("\n Sum of digit = %d",sum);
}

/*
Output:

 Enter a any number to calculate sum of digit :3456

 Sum of digit = 18
*/
