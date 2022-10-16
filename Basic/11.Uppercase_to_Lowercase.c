/*
	Developer Name = Shelake Kalyani
	Program = Program to accept an uppercase charcter and display in it lowercase.
	Language = C
*/

#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter any uppercase chartacter:");
    scanf("%c",&ch);
    
    printf("\n Lowercase character = %c",ch+32);
}

/*
Output:
	
 Enter any uppercase chartacter:K

 Lowercase character = k
	
*/
