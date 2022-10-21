/* 
Programmer name = Shelake Kalyani
Program Name    = find unique elements in array.
Technology Used = C
 */
 
#include<stdio.h>
int main()
{
    int M[10][10],i,j,r,c,flag=0;
    
    printf("Enter how many rows and columns you want:");
    scanf("%d%d",&r,&c);
    printf("Enter matrix :");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&M[i][j]);
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        	printf("%d ",M[i][j]);
		}
		printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j && M[i][j]!=0)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    printf("The given matrix is not upper triangular");
    else
    printf("The given matrix is upper triangular");
}

/*
Output 1:

		Enter how many rows and columns you want:3
		3
		Enter matrix :1
		2
		3
		0
		4
		5
		0
		0
		0
		1 2 3
		0 4 5
		0 0 0
		The given matrix is upper triangular

Output 2:
		Enter how many rows and columns you want:3
		3
		Enter matrix :0
		1
		2
		3
		4
		0
		1
		2
		9
		0 1 2
		3 4 0
		1 2 9
		The given matrix is not upper triangular
*/
