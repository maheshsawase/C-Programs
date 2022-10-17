/*
Programmer Name = Shelake Kalyani
Program Name = Program to check whether entered number is equal to 10,50,100 or not eqal. (switch statement)
Technology used = C
*/

#include <stdio.h>
int main()
{
    int number=0;
    
printf("\n enter a number:");
scanf("%d",&number);

switch(number)
{
    case 10 : printf("\n number is equal to 10");
              break;
    case 50 : printf("\n number is equal to 50");
              break;
    case 100 : printf("\n number is equal to 100");
              break;
    default : printf("\n number is not equal to 10,50 and 100");
}
}

/*
Output :

 enter a number:88

 number is not equal to 10,50 and 100
*/



