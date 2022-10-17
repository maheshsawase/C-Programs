/*
Programmer Name = Shelake Kalyani
Program Name = Program to check whether a enter character is vowel or consonant.
Technology used = C
*/

#include <stdio.h>
int main()
{
    char ch;
    
    printf("\n enter any character:");
    scanf("%c",&ch);
    
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("\n %c is vowel.",ch);
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("\n %c is consonant.",ch);
    }
    else
    {
        printf("\n %c is not alphabet.",ch);
    }
}


/*
Output 1:

 enter any character:A

 A is vowel.
 
Output 2:

 enter any character:z

 z is consonant.
*/
