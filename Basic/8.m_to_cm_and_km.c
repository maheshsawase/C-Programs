/*
	Developer Name = Shelake Kalyani
	Program = Write C program to convert centimeter into meter and kilometer. (1cm=10-2m  and 1cm=10-5km)
	Language = C
*/

#include <stdio.h>
int main()
{
   float cm,meter,kilometer;
   
   printf("\n Enter length in centimeter:");
   scanf("%f",&cm);
   
   meter=cm/100;
   kilometer=cm/100000;
   
   printf("\n Length in meter=%f",meter);
   printf("\n Length in kilometer=%f",kilometer);
   
   
}

/*
Output:

 Enter length in centimeter:200

Length in meter=2.000000
Length in kilometer=0.002000

*/
