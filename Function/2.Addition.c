/* 
   Programmer Name = Shelake Kalyani
   Program name    = program to print addition of two numbers using function.
   Technology used = C
*/

#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,ans;
	printf("Enter two numbers = ");
	scanf("%d%d",&a,&b);
	
	ans = add(a,b);
	printf("\n Addition of %d and %d is = %d.",a,b,ans);
}

int add(int a,int b)
{
	return (a+b);
}

/*
Output:
Enter two numbers = 5
10

 Addition of 5 and 10 is = 15.
*/
