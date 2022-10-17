/*
Programmer Name = Shelake Kalyani
Program Name = Program to find power of number. i.e. Xn
Technology used = C
*/

#include <stdio.h>
int main()
{
  int base,exponent,power=1,i;
  
  printf("\n Enter the value of base :");
  scanf("%d",&base);
  printf("\n Enter value of exponent :");
  scanf("%d",&exponent);
  
  for(i=1;i<=exponent;i++)
  {
    power = power*base;  
  }
  printf("\n %d^%d = %d",base,exponent,power);
}

/*
Output:

 Enter the value of base :4

 Enter value of exponent :3

 4^3 = 64
*/

