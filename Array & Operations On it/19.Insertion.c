/* 
   Developer Name = Shelake Kalyani 
   Program name = insert array element.
   Program date = 24-07-2021          
*/

#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE];
	int index,value,i,num;
	
	printf("Enter how many elements you want = ");
	scanf("%d",&num);
	
	if(num<0 || num>SIZE-1)
	{
		printf("Invalid number of elements..\n");
		return 0;
	}
	
	for(i=0;i<num;i++)
    {
    	printf("Enter element %d = ",i+1);
		scanf("%d",&arr[i]);        
	}
	
	printf("Enter Index = ");                 // index = 2
	scanf("%d",&index);
	
	if(index<=0 && index>=SIZE-1)
	{
	  printf("Invalid index.");
	  return -1;
	}
    printf("Enter Value = ");                // value = 70
    scanf("%d",&value);
    
    printf("\nBefore inserting value : \n");
    for(i=0;i<num;i++)
    {
    	printf("arr[%d] = %d ",i,arr[i]);        // arr[0] = 10   arr[1] = 20   arr[2] = 30   arr[3] = 40   arr[4] = 0
	}
	
	for(i=num-1;i>=index;i--)                     // i = 4 3 2    (i=1   --->   condition fail )
	{
		arr[i+1]=arr[i];                      // arr[5] = 0      arr[4] = 40      arr[3] = 30 
	}
	arr[index]=value; 
	num++;                        // arr[2] = 70
	
	printf("\n\nAfter inserting value : \n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d] = %d ",i,arr[i]);     // arr[0] = 10   arr[1] = 20   arr[2] = 70   arr[3] = 30   arr[4] = 40
	}
	return 0;
}







/*
Output:
		Enter how many elements you want = 4
		Enter element 1 = 1
		Enter element 2 = 2
		Enter element 3 = 3
		Enter element 4 = 4
		Enter Index = 2
		Enter Value = 10
		
		Before inserting value :
		arr[0] = 1 arr[1] = 2 arr[2] = 3 arr[3] = 4
		
		After inserting value :
		arr[0] = 1 arr[1] = 2 arr[2] = 10 arr[3] = 3 arr[4] = 4
*/
