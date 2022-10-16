/*
	Developer Name = Shelake Kalyani
	Program = Write C program to find area and circumferece of circle.
	Language = C
*/


#include <stdio.h>
int main()
{
    float pi=3.14,r,Area,S;
    
    printf("\n Enter radius of circle:");
    scanf("%f",&r);
    
    Area=pi*r*r;
    S=2*pi*r;
    
    printf("\n Area of circle=%f",Area);
    
    printf("\n Circumference of circle=%f",S);
}

/*
Output:

 Enter radius of circle:5

 Area of circle=78.500000
 Circumference of circle=31.400002
*/
