//10.WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
void main()
{
	int num;
	printf("\nEnetr the number =");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\nyou enter the positive number");
	}
	else if (num==0)
	{
		printf("\nyou enter the zero");
	}
	else
	{
		printf("\nyou enter the negative number");
	}
}
