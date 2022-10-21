/* 
   Programmer Name = Shelake Kalyani
   Program name    = Check whether number is even or odd.
   Technology used = C
*/

   
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int even_odd (int);
int main()
{
	int n,res;
	printf("Enter a number = ");
	scanf("%d",&n);
	res = even_odd(n);
	if(res==TRUE)
	  printf("Number is even");
	  else
	  printf("Number is odd");
	  
	  return 0;
}
int even_odd(int n)
{
	if(n%2==0)
	  return TRUE;
	else
	  return FALSE;
}

/*
Output 1:
Enter a number = 5
Number is odd.

Output 2:
Enter a number = 4
Number is even
*/
