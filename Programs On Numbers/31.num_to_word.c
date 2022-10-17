/*
Programmer Name = Shelake Kalyani
Program Name = Program to input a number from user and print it into word.
Technology used = C
*/

#include <stdio.h>
int main()
{
  int n,num=0;
  printf("Enter any number to print in word :");
  scanf("%d",&n);
  while(n!=0)
  
  {
      num = (num*10)+(n%10);
      n=n/10;
  }
  while(num!=0)
  {
      switch(num%10)
      {
          case 0: printf("\tZero");
                  break;
          case 1: printf("\tOne");
                  break;
          case 2: printf("\tTwo");
                  break;
          case 3: printf("\tThree");
                  break;
          case 4: printf("\tFour");
                  break;
          case 5: printf("\tFive");
                  break;
          case 6: printf("\tSix");
                  break;
          case 7: printf("\tSeven");
                  break;
          case 8: printf("\tEight");
                  break;
          case 9: printf("\tNine");
                  break;
      }
      num=num/10;
  }
}

/*
Output:
Enter any number to print in word :123
        One     Two     Three
*/
