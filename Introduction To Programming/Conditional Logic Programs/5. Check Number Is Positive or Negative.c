//5. Check Number Is Positive or Negative
#include<stdio.h>
void main()
{
	int num;
	printf("\nEnter the number =");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n%d is positive number",num);
	}
	else
	{
		printf("\n%d is negative number",num);
	}
}
