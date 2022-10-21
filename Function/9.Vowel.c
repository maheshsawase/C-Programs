/* 
   Programmer Name = Shelake Kalyani
   Program name    = Accept character from user and check whether it is vowel,consonant or not.
   Technology used = C
*/


#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define OTHER -1
char vowel(char);
int main()
{
    char ch,res;
    
    printf("\n enter any character:");
    scanf("%c",&ch);
    res = vowel(ch);
    if(res==TRUE)
    {
    	printf("%c is vowel",ch);
	}
	else if(res==FALSE)
	{
		printf("%c is consonant",ch);
	}   
	else
	{
		printf("You entered character is not an alphabet");
	}
	return 0;
}
char vowel(char ch)
{
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        return TRUE;
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        return FALSE;
    }
    else
    {
    	return OTHER;
	}
}

/*
Output 1:
		 enter any character:a
		  a is vowel
		  
Output 2:
		 enter any character:g
		 g is consonant
		 
Output 3:
		 enter any character:&
		 You entered character is not an alphabet
*/


