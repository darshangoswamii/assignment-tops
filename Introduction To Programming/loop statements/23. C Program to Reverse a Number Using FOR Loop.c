//23. C Program to Reverse a Number Using FOR Loop
//Series Program:
#include<stdio.h>
int main()
{
	int num,i,rev=0,rem,original,r,sum;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	
	original=num;
	
	for(i = num; num != 0; num = num / 10)
	{
         r = num % 10; 
         sum = sum * 10 + r; 
    }
	printf("\nOriginal number is : %d ", sum);
    printf("\nReverse a Number is : %d ", sum); 
    return 0;
}
