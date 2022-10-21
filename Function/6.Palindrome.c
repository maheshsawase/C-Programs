/* 
   Programmer Name = Shelake Kalyani
   Program name    = Check whether number is palindrome or not.
   Technology used = C
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
int palindrome(int);
int main()
{
    int no,rev;
    printf("Enter number = ");
    scanf("%d",&no);
    rev=palindrome(no);
    if(rev==TRUE)
       printf("number is palindrome");
    else
       printf("number is not palindrome");
    return 0;
}
int palindrome(int no)
{
	int rev=0,digit,temp=no;
	while(no>0)
	{
		rev=(rev*10)+(no%10);
		no=no/10;
	}
	if(temp==rev)
	     return TRUE;
	else
	     return FALSE;
}

/*
Output 1:
Enter number = 121
number is palindrome

Output 2:
Enter number = 122
number is not palindrome
*/
