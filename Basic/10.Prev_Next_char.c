/*
	Developer Name = Shelake Kalyani
	Program = Program to accept a character and display its next and previous character.
	Language = C
*/

#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter any charcter:");
    scanf("%c",&ch);
    
   // ch=getchar();
    printf("\n Next charcter = %c",ch+1);
    printf("\n Previous charcter = %c",ch-1);
}


/*
Output:
 Enter any charcter:K

 Next charcter = L
 Previous charcter = J
*/


