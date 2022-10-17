/*
Programmer Name = Shelake Kalyani
Program Name = Program to check given number is even or odd. (By using if-else statement)
Technology used = C
*/

#include <stdio.h>
int main()
{
    int n;
    
    printf("\n Enter any number:");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("\n %d is even number",n);
    }
    else
    {
        printf("\n %d is odd number",n);
    }
}


/*
Output:

 Enter any number:7

 7 is odd number
*/
