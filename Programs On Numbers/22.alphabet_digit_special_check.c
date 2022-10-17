/*
Programmer Name = Shelake Kalyani
Program Name = Program to check alphabet,digit or special character.
Technology used = C
*/

#include <stdio.h>
int main()
{
    char ch;
    
    printf("\n Enter any character:");
    scanf("%c",&ch);
    
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("\n %c is alphabet",ch);
    }
    else if(ch>='0'&& ch<='9')
    {
        printf("\n %c is digit",ch);
    }
    else
    {
        printf("\n %c is special charcter",ch);
    }
}

/*
Output 1:

 Enter any character:8

 8 is digit
 
Output:

 Enter any character:&

 & is special charcter
*/



    











































