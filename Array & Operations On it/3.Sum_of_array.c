/*
Programmer Name = Shelake Kalyani 
Program Name    = Program  to give sum of array elements.
Technology used = C
*/

#include<stdio.h>
int main()
{
	float a[5]={3.2,4.6,6.7,1.3,3.8};
	float sum=0;
	int i;
	
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of array element = %f",sum);
	return 0;
}

/*
Output:
Sum of array element = 19.600000
*/

