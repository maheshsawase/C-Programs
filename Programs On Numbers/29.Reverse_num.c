/*
Programmer Name = Shelake Kalyani
Program Name = Program to input a number and find reverse of the given number.
Technology used = C
*/

#include <stdio.h>
int main()
{
    int num,reverse=0;
    printf("Enter any number :");
    scanf("%d",&num);
    while(num!=0)
    {
        reverse = (reverse*10)+(num%10);
        num = num/10;
    }
    printf("\n Reverse number is = %d",reverse);
}


/*
Output:
Enter any number :873456

 Reverse number is = 654378
*/
