/*
Programmer Name = Shelake Kalyani 
Program Name    = Find maximum and minumum element in an array and calculates it's difference.
Technology used = C
*/

#include<stdio.h>
#define SIZE 100
int main()
{
	int arr[SIZE]={0};
	int num,i,min=0,max=0;
	
	printf("Enter how many elements you want in array = ");
	scanf("%d",&num);
	
		if(num<=0 || num>SIZE-1)
	{
		printf("Invalid input.\n");
		return -1;
	}
	
	for(i=0;i<num;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n Your array = \n");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<num;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n %d is minimum number in array.\n",min);
	printf("%d is maximum number in array.\n",max);
	printf("Difference between max and min element in array = %d\n",max-min);
	return 0;
}

/*
Output:
Enter how many elements you want in array = 6
Enter element 1 = 12
Enter element 2 = 66
Enter element 3 = 3
Enter element 4 = 9
Enter element 5 = 6
Enter element 6 = 7

 Your array =
12 66 3 9 6 7
 3 is minimum number in array.
66 is maximum number in array.
Difference between max and min element in array = 63
*/
