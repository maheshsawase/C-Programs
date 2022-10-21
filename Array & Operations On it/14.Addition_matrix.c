/* 
Programmer name = Shelake Kalyani
Program Name    = Write C program to write matrix addition.
Technology Used = C
 */
 
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int m1[9][9],m2[9][9],add[9][9],i,j,r1,r2,c1,c2;
    
    printf("\n Enter how many rows and columns in first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("\n Enter how many rows and columns in second matrix:");
    scanf("%d%d",&r2,&c2);
    
    if(r1==r2 && c1==c2)
    {
        printf("\n Enter element of first matrix:");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
    printf("\n Enter element of second matrix:");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
        
    }
}

{
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            add[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("\n first matrix is \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t %d",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n second matrix is \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t %d",m2[i][j]);
        }
        printf("\n");
    }
    printf("\n Resultant matrix \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t %d",add[i][j]);
        }
        
        printf("\n");
    }
}
}
else
printf("\n Addition of matrix is not possible");
exit(0);

    
    
}

/*
Output:

 Enter how many rows and columns in first matrix:3
3

 Enter how many rows and columns in second matrix:3
3

 Enter element of first matrix:1
2
3
1
2
3
1
2
3

 Enter element of second matrix:1
2
3
1
2
3
1
2
3

 first matrix is 
         1       2       3
         1       2       3
         1       2       3

 second matrix is 
         1       2       3
         1       2       3
         1       2       3

 Resultant matrix 
         2       4       6
         2       4       6
         2       4       6
         
*/
