/*
Programmer Name = Shelake Kalyani
Program Name = Program to input week number(1-7) and print day of week name using switch case.
Technology used = C
*/

#include <stdio.h>
int main()
{
  int week;
  printf("\n Enter a week number(1-7):");
  scanf("%d",&week);
  
  switch(week)
  {
      case 1 : printf("\n Monday");
               break;
      case 2 : printf("\n Tuesday");
               break;
      case 3 : printf("\n Wednesday");
               break; 
      case 4 : printf("\n Thursday");
               break;
      case 5 : printf("\n Friday");
               break;
      case 6 : printf("\n saturday");
               break;
      case 7 : printf("\n Sunday");
               break;
      default : printf("\n Invalid number! please enter the number between 1 and 7");
               
  }
}

/*

 Enter a week number(1-7):4

 Thursday
*/


