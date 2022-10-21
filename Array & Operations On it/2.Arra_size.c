/*
Programmer Name = Shelake Kalyani 
Program Name    = Size of different type of array.
Technology used = C
*/
#include<stdio.h>
int main()
{
	int arr[5]={10,-30,98,-76,70};                     // All memory allocation
	char brr[5]={'A','B'};                            // Partial memory allocation
	float crr[]={9.8,7.5,98.76};                      // Allocation without specifying size
	
	printf("Size of integer array = %d\n",sizeof(arr));
	printf("Size of character array = %d\n",sizeof(brr));
	printf("Size of float array = %d\n",sizeof(crr));
}

/*
Output:
Size of integer array = 20
Size of character array = 5
Size of float array = 12
*/
