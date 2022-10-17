/*
Programmer Name = Shelake Kalyani
Program Name = program to check given number is strong number or not.
Technology used = C
*/

#include <stdio.h>

int factorial(int num)
{
	int i,fact = 1;
	for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n,digit,i,temp,sum = 0,res;
    
    printf("\n Enter any number: ");       //145  120+24+1
    scanf("%d",&n);
    temp = n;
    
    while(n!=0)
    {
    	digit = n%10;
    	res = factorial(digit);
    	n = n/10;
    	sum = sum + res;
	}
	
	if(temp==sum)
	{
		printf("%d is strong number.\n",temp);
	}
	else
	{
		printf("%d is not strong number.\n",temp);
	}
    
}

/*
Output:

 Enter any number: 145
145 is strong number.


 Enter any number: 657
657 is not strong number.
*/
