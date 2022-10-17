/*
Programmer Name = Shelake Kalyani
Program Name = Program to check whether given numbers are equal or not. If not,find relation between them(greater and less).
(By using  nested else-if statements)
Technology used = C
*/


#include <stdio.h>
int main()
{
    
    int a,b;
    
    printf("\n Enter the value of a:");
    scanf("%d",&a);
     printf("\n Enter the value of b:");
    scanf("%d",&b);
    
    if(a!=b)
    {
        printf("\n %d is not equal to %d",a,b);
        if(a>b)
    {
        printf("\n %d is greater than %d",a,b);
    }
    else
    {
        printf("\n %d is greater than %d",b,a);
    }
    }
    else
    {
    printf("\n %d is equal to %d",a,b);
    }

}

/*
Output:

 Enter the value of a:45

 Enter the value of b:99

 45 is not equal to 99
 99 is greater than 45
 
*/
