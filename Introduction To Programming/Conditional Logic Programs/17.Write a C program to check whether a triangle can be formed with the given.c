//17.Write a C program to check whether a triangle can be formed with the given
//values for the angles.
#include<stdio.h>
int main()
{
	int ang1,ang2,ang3,sum;
	printf("Enter the three value of triangle =");
	scanf("%d  %d  %d",&ang1,&ang2,&ang3);
	sum = ang1 + ang2+ ang3;
	if(sum==180)
	{
		printf("\nhe triangle is valid");
	}
	else 
	{
		printf("\nhe triangle is not valid");
	}
	
}
