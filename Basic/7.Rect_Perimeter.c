/*
	Developer Name = Shelake Kalyani
	Program = Write C program to calculate the area and perimeter of rectangle.
	Language = C
*/


#include <stdio.h>
int main()
{
    int l,b,Area,P;
    printf("\n Enter length and bradth of ractangle:");
    scanf("%d%d",&l,&b);
    
    Area=l*b;
    P=2*(l+b);
    
    printf("\n Area of rectangle=%d",Area);
     printf("\n perimeter of rectangle=%d",P);
}




/*
Output:

 Enter length and bradth of ractangle:4
 7

 Area of rectangle=28
 perimeter of rectangle=22
*/




