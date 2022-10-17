/*
Programmer Name = Shelake Kalyani
Program Name = Program to print all even numbers between 1 to n.
Technology used = C
*/

#include <stdio.h>
int main()
{
    int n,i;
    printf("\n Print all even numbers upto :");
    scanf("%d",&n);
    printf("\n even numbers from 1 to %d are :",n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }
}


/*
Output:


 Print all even numbers upto :20

 even numbers from 1 to 20 are :0 
2 
4 
6 
8 
10 
12 
14 
16 
18 
20 
*/
