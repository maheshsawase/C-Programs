/*
Programmer Name = Shelake Kalyani 
Program Name    = Create array and display it.
Technology used = C
*/

#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter how many numbers you want in an array = ");
	scanf("%d",&num);
	
	int arr[num];
	
	printf("Enter %d elements in an array = ");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Your array = ");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


/*
Output :
Enter how many numbers you want in an array = 5
Enter 5 elements in an array = 1
2
3
4
5
Your array = 1 2 3 4 5
*/
