//10.Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)
#include<stdio.h>
int main()
{
	int num,i,j,sum=0 ,fdigit,ldigit;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	ldigit= num%10;
	
	fdigit=num; 
	
	while(num>=10)
	{
		num = num /10;
	}
	
	fdigit=num;
	
	sum=fdigit+ldigit;
	
	printf("Sum of first and last digit = %d", sum);

    return 0;	
	
}
