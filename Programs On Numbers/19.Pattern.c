/*
Programmer Name = Shelake Kalyani
Program = 20)	program to print following pattern.
    	   	 1	
			 1	  2
             1	  2	 3
             1	  2	 3	4
             1	  2	 3	4	5

Technology used = C
*/

#include <stdio.h>
int main()
{
    int i,j;
    
    for(j=1;j<=5;j++)
    {
        for(i=1;i<j;i++)
        printf("%d\t",i);
        printf("\n\n");
    }
}


/*
Output:


1

1       2

1       2       3

1       2       3       4
*/
