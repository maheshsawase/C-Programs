/* 
Programmer name = Shelake Kalyani
Program Name    = Program to count frequency of elements in array .
Technology Used = C
 */

#include <stdio.h>
int main()
{
	int arr[10], FreqArr[10], i, j, Count, Size;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
    	FreqArr[i] = -1;
   	}     
 
	for (i = 0; i < Size; i++)
	{
		Count = 1;
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			FreqArr[j] = 0;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = Count;
		}
	}

 	printf("\n Frequency of All the Elements in this Array are : \n");
 	for (i = 0; i < Size; i++)
  	{
  		if(FreqArr[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", arr[i], FreqArr[i]);
		}		
  	}	     
 	return 0;
}

/*
Output:

 Please Enter Number of elements in an array  :   6

 Please Enter 6 elements of an Array  :  1
2
3
2
4
2

 Frequency of All the Elements in this Array are : 
1 Occurs 1 Times 
2 Occurs 3 Times 
3 Occurs 1 Times 
4 Occurs 1 Times 

*/

