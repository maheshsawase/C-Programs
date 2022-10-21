/*
Programmer Name = Shelake Kalyani 
Program Name    = Create array and count odd and even number from it.
Technology used = C
*/

#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE];
	int i,even=0,odd=0;
	
	printf("Enter %d elements : \n",SIZE);
	for(i=0;i<SIZE;i++)
	{
	
	printf("Enter a number %d = ",i+1);
	scanf("%d",&a[i]);
 }
  printf("\n Array = ");
  for(i=0;i<SIZE;i++)
  {
  	printf("%d ",a[i]);
  }
  for(i=0;i<SIZE;i++)
  {
  	if(a[i]%2==0)
  	{
  		even++;
	  }
	  else
	  {
	  	odd++;
	  }
  }
  printf("\n Total even numbers in array = %d",even);
  printf("\n Total odd numbers in array = %d",odd);
  return 0;
}


/*
Output:
Enter 10 elements :
Enter a number 1 = 12
Enter a number 2 = 3
Enter a number 3 = 55
Enter a number 4 = 3
Enter a number 5 = 22
Enter a number 6 = 54
Enter a number 7 = 99
Enter a number 8 = 43
Enter a number 9 = 16
Enter a number 10 = 33

 Array = 12 3 55 3 22 54 99 43 16 33
 Total even numbers in array = 4
 Total odd numbers in array = 6
*/
  
