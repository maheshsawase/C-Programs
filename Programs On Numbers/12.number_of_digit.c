/*
Programmer Name = Shelake Kalyani
Program Name = program to count the number of digits present in any number. (do-while)
Technology used = C
*/


#include <stdio.h>

int main()
{
    int n,sum=0,count;
    
    printf("\n Enter any number:");
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;
    }
    while(n>0);
        printf("\n number of digits present in given number = %d",count);   
}


/*
Output:

 Enter any number:984257

 number of digits present in given number = 6
*/


