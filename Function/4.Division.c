/* 
   Programmer Name = Shelake Kalyani
   Program name    = print prime numbers between 1 to 10 .
   Technology used = C
*/

#include<stdio.h>
int div(int,int);
int main()
{
	int a,b,ans;
	printf("Enter two numbers = ");
	scanf("%d%d",&a,&b);
	
	if(b==0)
	{
		printf("Sorry..You cannot perform division");
		return 0;
	}
	
	ans = div(a,b);
	printf("\n Subtraction of %d and %d is = %d.",a,b,ans);
}

int div(int a,int b)
{
	return (a/b);
}

/*
Output 1:
Enter two numbers = 4
2

 Subtraction of 4 and 2 is = 2.
 
Output 2:
Enter two numbers = 4
0
Sorry..You cannot perform division
*/
