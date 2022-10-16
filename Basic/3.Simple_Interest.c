/*
	Developer Name = Shelake Kalyani
	Program = Write C program to calculate simple interest.
	Language = C
*/


#include <stdio.h>
int main()
{
    float p,t,r,SI;
    
    printf("\n Enter principle (amount):");
    scanf("%f",&p);
    printf("\n Enter time:");
    scanf("%f",&t);
    printf("\n Enter rate:");
    scanf("%f",&r);
    
    SI=p*t*r/100;
    
    printf("\n Simpe interest=%f",SI);
}

/*
Output:
	
 Enter principle (amount):2000

 Enter time:2

 Enter rate:200

 Simpe interest=8000.000000
*/


