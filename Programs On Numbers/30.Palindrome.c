/*
Programmer Name = Shelake Kalyani
Program Name = Program to input a number from user and check number is palidrome or not.
Technology used = C
*/


#include <stdio.h>
int main()
{
    int n,i,temp,r=0;
    printf("\n Enter number to check whether it is palindrome or not:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(r==temp)
    printf("\n %d is palindrome number",temp);
    else
    printf("\n %d is not palindrome number",temp);
}

/*
Output 1:

 Enter number to check whether it is palindrome or not:8765

 8765 is not palindrome number.
 
Output 2:

 Enter number to check whether it is palindrome or not:121

 121 is palindrome number
*/


