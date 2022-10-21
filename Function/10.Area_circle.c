/* 
   Programmer Name = Shelake Kalyani
   Program name    = Calculate area of circle.
   Technology used = C
*/


#include<stdio.h>
float Area(int);
int main()
{
	int iRad = 0;
	float area;
	
	printf("Enter radius = ");
	scanf("%d",&iRad);
	
	//area = Area(iRad);
	
	printf("Area of circle = %f\n",Area(iRad));
}

float Area(int radius)
{
	float pi = 3.14;
	return 2*pi*radius;
}

/*
Output:
		Enter radius = 5
		Area of circle = 31.400002
*/
