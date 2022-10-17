/*
Programmer Name = Shelake Kalyani
Program Name = Program to input a number and calculate sum of first and last digit of the number.
Technology used = C
*/

#include <stdio.h>
int main()
{
    int num,sum=0,firstDigit,lastDigit;
    
    printf("\n Enter any number to find sum of firat and last digit :");
    scanf("%d",&num);
    firstDigit = num;
    lastDigit = num%10;
    while(num>=10)
    {
        num = num/10;
    }
    firstDigit = num;
    sum = firstDigit+lastDigit;
    printf("\n Sum of first and last digit = %d",sum);
}


/*
Output:

 Enter any number to find sum of firat and last digit :134578

 Sum of first and last digit = 9
*/
