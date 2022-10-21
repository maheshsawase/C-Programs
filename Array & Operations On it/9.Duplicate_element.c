/* 
Programmer name = Shelake Kalyani
Program Name 	= Program to input element in array from user then print and count duplicate element in array .
Technology used = C. 
*/
#include<stdio.h>

int main()
{
	int a[5];
	int i,j,cnt=0;
	for(i=0;i<5;i++)
	{
		printf("Enter element %d = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n Array = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i] == a[j])
			{
				printf("\n %d is duplicate element in array.",a[i]);
				cnt++;
				break;
			}
		}
	}
	printf("\n Total duplicate element in array = %d ",cnt);
	return 0;
}


/*
Output:
Enter element 1 = 10
Enter element 2 = 20
Enter element 3 = 10
Enter element 4 = 20
Enter element 5 = 30

 Array = 10 20 10 20 30
 10 is duplicate element in array.
 20 is duplicate element in array.
 Total duplicate element in array = 2
*/
