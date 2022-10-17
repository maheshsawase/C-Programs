/*
Programmer Name = Shelake Kalyani
Program Name = Program to check whether given nuber is divisible by 5 or divisible by 8 by both or divisible by none.
Technology used = C
*/


#include <stdio.h>
int main()
{
    int k;
    
    printf("\n Enter a number:");
    scanf("%d",&k);
    
    if(k%5==0 && k%8==0)
    {
        printf("\n divisible by both 5 and 8 ");
    }
    else if(k%5==0)
    {
        printf("\n divisible by 5");
    }
    else if(k%8==0)
    {
        printf("\n divisible by 8");
    }
    else
    {
        printf("\n divisible by none");
    }
}

/*
Output:

 Enter a number:40

 divisible by both 5 and 8
*/
