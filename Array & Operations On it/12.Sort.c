/* 
Programmer name = Shelake Kalyani
Program Name    = Write C program to sort given array in ascending order.
Technology Used = C
 */

#include <stdio.h>
int main()
{
   int a[100],n,i;
   printf("\n Enter how many elements you want in array:");
   scanf("%d",&n);
   printf("\n Enter %d elements:",n);
   
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   sort (a,n);
}
void sort(int a[100],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n sorted array:");
    for(i=0;i<n;i++)
    printf("%d \t",a[i]);
}

/*
Output:
 Enter how many elements you want in array:5

 Enter 5 elements:90
20
10
100
30

 sorted array:10        20      30      90      100
*/


