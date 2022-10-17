/*
Programmer Name = Shelake Kalyani
Program Name = Program to input a number from user and find all divisors of the given number.
Technology used = C
*/

#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter any number = ");
	scanf("%d",&num);
	
	printf("Divisors of %d = ",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
}

/*
Output:
Enter any number = 18
Divisors of 18 = 1 2 3 6 9 18
*/
