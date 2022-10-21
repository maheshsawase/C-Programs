/*
Programmer Name = Shelake Kalyani 
Program Name    = Create array and display only even numbers from it.
Technology used = C
*/

#include<stdio.h>
#define SIZE 100
int main()
{
	int arr[SIZE]={0};
	int num,i;
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
		if(num<=0 || num>SIZE-1)
	{
		printf("Invalid input.\n");
		return -1;
	}
	
	for(i=0;i<num;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("Even numbers which present in your array = \n");
	for(i=0;i<num;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}

/*
Output:
Enter how many elements you want in array = 5
Enter number 1 = 3
Enter number 2 = 5
Enter number 3 = 8
Enter number 4 = 90
Enter number 5 = 3
Even numbers which present in your array =
8 90
*/
