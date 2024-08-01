//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main()
{
	int arr[100],i,num,sum=0;
	printf("Enter the 5 value of array :");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the %d value : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum = sum + arr[i];
	}
	
	printf("\n%d is addition of array",sum);
	
	return 0;
}
