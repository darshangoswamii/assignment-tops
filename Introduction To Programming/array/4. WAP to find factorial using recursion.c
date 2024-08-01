//4. WAP to find factorial using recursion
#include<stdio.h>
int fact(int num);

int main()
{
	int num ,ans;
	printf("Enter the number for factorial :");
	scanf("%d",&num);
	ans = fact(num);
	printf("\nfactorial of %d is %d",num,ans);
	return 0;
}

int fact(int num)
{
	if(num>1)
	{
		return num*fact(num-1);
	}
//	else
//	{
//		return 0;
//	}
}
