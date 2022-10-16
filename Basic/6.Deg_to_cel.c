/*
	Developer Name = Shelake Kalyani
	Program = Write C program to convert temperatre in degree Celcius to Fahrenheit.
	Language = C
*/

#include <stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("\n Enter temperature in Celcius:");
    scanf("%f",&celcius);
    
    fahrenheit = (celcius*9/5)+32;
    printf("%.2f celcius = %.2f fahrenheit",celcius,fahrenheit);
    
}


/*
Output:

 Enter temperature in Celcius:129
129.00 celcius = 264.20 fahrenheit

*/
