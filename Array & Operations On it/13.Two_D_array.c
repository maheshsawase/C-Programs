/* 
Programmer name = Shelake Kalyani
Program Name    = Write C program to accept two dimentional array from user and display it on the screen.
Technology Used = C
 */
 
#include <stdio.h>
int main()
{
    int m[3][3],i,j;
    printf("\n Enter array element:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&m[i][j]);
    }
    printf("Your array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("\t %d",m[i][j]);
        printf("\n");
    }
}



/*
Output:

 Enter array element:1
2
3
4
5
6
7
8
9
Your array:
         1       2       3
         4       5       6
         7       8       9
         
*/
