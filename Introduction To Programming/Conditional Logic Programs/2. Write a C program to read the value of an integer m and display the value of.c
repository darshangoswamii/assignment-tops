//2. Write a C program to read the value of an integer m and display the value of
//n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
#include<stdio.h>
void main()
{
	int m,n;
	printf("\nEnter the M value =");
	scanf("%d",&m);
	
	if(m!=0)
	{
		if(m>0)
		{
			n=1;
		}
		else
		{
			n=-1;
		}
	}
	else
	{
		n=0;
	}
	printf("\nM value is %d",m);
	printf("\nM value is %d",n);
	
}
