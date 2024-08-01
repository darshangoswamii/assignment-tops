//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
//82746
#include<stdio.h>
int main()
{
	int num=64728,rev=0,rem;
	printf("\noriginal number is %d",num);
	
	while(num!=0)
	{
		rem = num%10;
		rev = (rev*10) + rem;
		num = num/10;
	}
	printf("\nrevrese number = %d",rev);
	
	
}
