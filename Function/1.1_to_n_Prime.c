/* 
   Programmer Name = Shelake Kalyani
   Program name    = print prime numbers between 1 to 10 .
   Technology used = C
*/

#include<stdio.h>
int prime(int);
int main()
{
	
	int i,end,ans;
	
	printf("enter the value of end = \n");
	scanf("%d", &end);
	
	printf("All prime numbers form 1 to %d: \n1", end) ;
	
	for(i=2;i<=end;i++)
	{
		ans=prime(i);
		if(ans!=1)
		{
			printf("\n%d",i);
		}
		
	}
	
return 0;	
}

int prime(int num)
{
	int i;

	for(i=2;i<=(num/2);i++)
	{
		if(num%i==0)
		{
			
			return 1;
		}	
	}	
	return 0;
}
