/*
Programmer Name = Shelake Kalyani
Program Name = Program to find the sum of first n natural number 1+2+3+………..+n . (while loop)
Technology used = C
*/

#include <stdio.h>
int main()
{
    int sum=0,i=1,n;
    
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\n sum=%d",sum);
}

/*
Output:

 Enter the value of n:20

 sum=210
*/
