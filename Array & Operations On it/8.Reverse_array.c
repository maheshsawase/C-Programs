/*
Programmer Name = Shelake Kalyani
Program Name    = Reverse the array (Actual reverse).
Technology used = C
*/

#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE]={0};
    int num,i,temp=0;
    printf("Enter how many elements you want in array = ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
    	printf("Enter element %d = ",i+1);
    	scanf("%d",&arr[i]);
	}
	
	printf("\n Original array = ");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	} 
	
	int start = 0,end = num-1;
	while(start<=end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	printf("\n Array after reverse = ");
		for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

/*
Output:
Enter how many elements you want in array = 5
Enter element 1 = 10
Enter element 2 = 20
Enter element 3 = 30
Enter element 4 = 40
Enter element 5 = 50

 Original array = 10 20 30 40 50
 Array after reverse = 50 40 30 20 10
*/
