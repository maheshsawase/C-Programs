/*
Programmer Name = Shelake Kalyani
Program Name = program to print sum of odd numbers between 1 and 10
Technology used = C
*/

#include <stdio.h>
int main()
{
    int a,sum=0;
    for(a=0;a<10;a++)
    {
        if(a%2==0)
        continue;
        sum = sum+a;
    }
    printf("sum=%d",sum);
}

/*
sum=25
*/




