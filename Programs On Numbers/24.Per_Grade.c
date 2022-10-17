/*
Programmer Name = Shelake Kalyani
Program Name = Program to input marks of five subjects Physics,Chemistry,Biology,Mathematics and Computer,calculate percentage and grade according to given condition:
		If percentage>=90% : Grade A
		If percentage>=80%: Grade B
		If percentage>=70% : Grade C
		If percentage>=60%: Grade D
		If percentage>=40% : Grade E
		If percentage<40%: Grade F
Technology used = C
*/

#include <stdio.h>
int main()
{
    int phy,chem,bio,math,comp;
    float per;
    printf("\n Enter marks of five subjects:");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
    
    per=(phy+chem+bio+math+comp)/5.0;
    printf("\n Percentage=%f\n",per);
    
    if(per>=90)
    {
        printf("\n Grade A");
    }
     else if(per>=80)
    {
        printf("\n Grade B");
    }
     else if(per>=70)
    {
        printf("\n Grade C");
    }
     else if(per>=60)
    {
        printf("\n Grade D");
    }
     else if(per>=40)
    {
        printf("\n Grade E");
    }
    else
    {
        printf("\n Grade F");
    }
}

/*
Output:

 Enter marks of five subjects:90
87
85
94
88  

 Percentage=88.800003

 Grade B
*/
