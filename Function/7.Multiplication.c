/* 
   Programmer Name = Shelake Kalyani
   Program name    = Program to calculate multiplication of number using function.
   Technology used = C
*/

#include<stdio.h>
int mul(int,int);
int main()
{
	int a,b,ans;
	printf("Enter two numbers = ");
	scanf("%d%d",&a,&b);
	
	ans = mul(a,b);
	printf("\n Subtraction of %d and %d is = %d.",a,b,ans);
}

int mul(int a,int b)
{
	return (a*b);
}

/*
Output:
Enter two numbers = 5
9

 Subtraction of 5 and 9 is = 45.
*/
