/* 
Programmer name = Shelake Kalyani
Program Name    = find unique elements in array.
Technology Used = C
 */
   
#include<stdio.h>
#define SIZE 5
int main()
{
	int a[SIZE],f[100];
	int i,cnt,j;
	for(i=0;i<5;i++)
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
  	cnt=1;
  	for(j=i+1;j<SIZE;j++)   // 20 30 40 20 50
  	{
  		if(a[i]==a[j])
  		{
  			cnt++;
  			f[j]=0;
		  }
	  }
	  if(f[i]!=0)
	  {
	  	f[i]=cnt;
	  }
  }
  printf("\n UNIQUE elements in array are.....\n");
  for(i=0;i<SIZE;i++)
  {
  	if(f[i]==1)
  	{
	  
  	printf("%d\t",a[i]);
  }
  }
  return 0;
}


/*
Output:
Enter a number 1 = 2
Enter a number 2 = 4
Enter a number 3 = 5
Enter a number 4 = 2
Enter a number 5 = 3

 Array = 2 4 5 2 3
 UNIQUE elements in array are.....
4       5       3
*/
  
