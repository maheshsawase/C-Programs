/*
Programmer Name = Shelake Kalyani
Program Name = Program to check given number is perfect or not.
Technology used = C
*/

#include<stdio.h>
int main()
{
	int num,i,sum=0;
	
	printf("Enter any number = ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum = sum + i;
		}
	}
	
	if(num==sum)
	{
		printf("%d is Perfect number.\n",num);
	}
	else
	{
		printf("%d is not Perfect number.\n",num);
	}
}

/*
Output 1:
Enter any number = 6
6 is Perfect number.

Output 2:
Enter any number = 19
19 is not Perfect number.
*/
