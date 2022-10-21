/* 
Programmer name = Shelake Kalyani
Program Name    = Program to check whether given matrix is symmetric or not.
Technology Used = C
 */
 
#include <stdio.h>
int main()
{
    int M[10][10],i,j,r,c,T[10][10],flag=0;
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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(T[i][j]!=M[i][j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    printf("The given matrix is not symmetric");
    else
    printf("The given matrix is symmetric");
}

/*
Output:

 How many rows and columns you want:3
3
Enter matrix :1
2
3
1
2
3
1
2
3
The original matrix is :
1       2       3
1       2       3
1       2       3

 The transpose of matrix is :
1       1       1
2       2       2
3       3       3
The given matrix is not symmetric


Output 2:

 How many rows and columns you want:3
3
Enter matrix :1
1
1
1
1
1
1
1
1
The original matrix is :
1       1       1
1       1       1
1       1       1

 The transpose of matrix is :
1       1       1
1       1       1
1       1       1
The given matrix is symmetric

*/
