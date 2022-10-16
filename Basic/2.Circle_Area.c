/*
	Developer Name = Shelake Kalyani
	Program = Write C program to calculate area of circle.
	Language = C
*/

#include <stdio.h>
int main()
{
    float r,pi=3.14,Area;
    
    printf("\n Enter radius of circle:");
    scanf("%f",&r);
    
    Area=pi*r*r;
    
    printf("\n Area of circle= %f",Area);
}

/*
Output:
	
 Enter radius of circle:4

 Area of circle= 50.240002
 */


