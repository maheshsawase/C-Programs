/*
Programmer Name = Shelake Kalyani
Program Name= program to accept number & display it's table.
Technology used = C
*/


#include <stdio.h>
int main()
{
    int n,i;
    
    printf("\n Enter number :");
    scanf("%d",&n);
    printf("Table of %d is \n",n);
    
    for(i=1;i<=10;i++)
    
    printf("%d*%d = %d\n",n,i,n*i);
}


/*

 Enter number :6
Table of 6 is
6*1 = 6
6*2 = 12
6*3 = 18
6*4 = 24
6*5 = 30
6*6 = 36
6*7 = 42
6*8 = 48
6*9 = 54
6*10 = 60

*/

