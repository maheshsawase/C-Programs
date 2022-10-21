/* 
Programmer name = Shelake Kalyani
Program Name    = Program to find transpose of matrix.
Technology Used = C
 */
 
#include <stdio.h>
int main()
{
    int M[10][10],i,j,r,c,T[10][10];
    printf("\n How many rows and columns you want:");
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
            T[j][i]=M[i][j];
        }
    }
    printf("The original matrix is :\n");
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",M[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n The transpose of matrix is :\n");
    {
        for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
    }
}

/*
Output:

 How many rows and columns you want:3
3
Enter matrix :1
2
3
4
5
6
7
8
9
The original matrix is :
1       2       3
4       5       6
7       8       9

 The transpose of matrix is :
1       4       7
2       5       8
3       6       9
*/
