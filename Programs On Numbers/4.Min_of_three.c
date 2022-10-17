/*
Programmer Name = Shelake Kalyani
Program Name = Program to check given number is even or odd. (By using if-else statement)
Technology used = C
*/

#include <stdio.h>
int main()
{
    int a,b,c;
    
    printf("\n Enter three numbers:");
    scanf("%d %d%d",&a,&b,&c);
    
    if(a<b)
    {
        if(a<c)
        printf("\n %d is minimum",a);
        else
        printf("\n %d is minimum",c);
    }
    else
    
    {
        if(b<c)
        
            printf("\n %d is minimum",b);
            else
            printf("\n %d is minimum",c);
        
    }
}

/*
Output:

 Enter three numbers:23
78
12

 12 is minimum
*/
