/* 
   Programmer Name = Shelake Kalyani
   Program name    = Check whether number is armstrong or not.
   Technology used = C
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int arm_no(int);
int main()
{
	int num,ret=0;
	printf("Enter a number = ");
	scanf("%d",&num);
	ret = arm_no(num);
	if(ret==TRUE)
	{
		printf("\n Entered number is armstrong number.");
	}
	else
	{
		printf("\n Entered number is not an armstrong number.");
	}
	return 0;
}
int arm_no(int num)
{
	int temp,digit=0,sum=0;
	temp = num;
	
	while(num!=0)
	{
		digit = num%10;
		sum = sum + (digit*digit*digit);
		num = num/10;
	}
	printf("\n sum = %d\n",sum);
	if(temp==sum)
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
Enter a number = 153

 sum = 153

 Entered number is armstrong number.
 
Output 2:
Enter a number = 123

 sum = 36

 Entered number is not an armstrong number.

*/
