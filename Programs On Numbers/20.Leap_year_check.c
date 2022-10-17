/*
Programmer Name = Shelake Kalyani
Program Name = Program to check whether is leap year or not.
Technology used = C
*/

#include <stdio.h>
int main()
{
   int year;
   
   printf("\n Enter year to check whether it is leap year or not:");
   scanf("%d",&year);
   
   if(((year % 4==0) && (year % 100 !=0)) || (year % 4==0))
   {
       printf(" %d is leap year",year);
   }
   else
   {
       printf("\n %d is not leap year",year);
   }
    
   
}

/*
Output:

 Enter year to check whether it is leap year or not:2014

 2014 is not leap year
*/
