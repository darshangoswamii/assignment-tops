//5. WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int num,i,ans;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		ans=ans*i;
	}
	printf("\nfactorial of %d is %d",num,ans);
	
	return 0;
	
}
