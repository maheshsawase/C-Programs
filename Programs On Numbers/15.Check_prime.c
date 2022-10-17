/*
Programmer Name = Shelake Kalyani
Program Name = program to check wehether entered number is prime or not.
Technology used = C
*/


#include<stdio.h>
int main()
{
    int n,i,flag=0;
    
    printf("\n Enter number to check whether it is prime or not:");
    scanf("%d",&n);
    
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\n %d is not prime",n);
    else
    printf("\n %d is prime",n);
}




/*
Output:

 Enter number to check whether it is prime or not:9

 9 is not prime
*/
