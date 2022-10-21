/* 
   Programmer Name = Shelake Kalyani
   Program name    = Check whether number is Perfect or not.
   Technology used = C
*/


#include<stdio.h>
#define TRUE 1
#define FALSE 0
int perfect(int);
int main()
{
	int num,ret=0;
	printf("Enter a number = ");
	scanf("%d",&num);
	ret=perfect(num);
	if(ret==1)
	{
		printf("\n Entered number is perfect number.\n");
	}
	else
	{
		printf("\n Entered number is not perfect number.\n");
	}
	return 0;
}
int perfect(int num)
{
	int sum=0,i;
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
		//	printf("%d ",i);
			sum = sum + i;
		}
	}
//	printf("\n Sum = %d",sum);
	if(sum==num)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


/*
Output 1:
Enter a number = 6

 Entered number is perfect number.
 
Outpu 2:
Enter a number = 17

 Entered number is not perfect number.
*/
