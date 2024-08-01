//12.Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,j,sum=0,count=0,rem;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	int copy=num;
	
	
	while(copy!=0)
	{
		rem =copy/10;
		count++;	
	}
	
	copy=num;
	
	for(i=0;i<count;i++)
	{
		rem = copy % 10;
		sum = sum + pow(rem,count);
		copy = copy / 10;
	}
	if(sum==num)
	{
		printf("\n %d is the aemstrong number",num);
	}
	else 
	{
		printf("\n %d is the not aemstrong number",num);
	}
	return 0;
	
	
}
