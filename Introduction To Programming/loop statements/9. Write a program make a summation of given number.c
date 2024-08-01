//9. Write a program make a summation of given number
#include<stdio.h>
int main()
{
	int num,i,j,sum=0;
	printf("Enter the number :");
	scanf("%d",&num);
	
	while(num!=0)
	{
		sum =sum + num%10;
		
		num = num / 10;
			
	}
	
	printf("\nsum of digits = %d",sum);
	
	return 0;
}
