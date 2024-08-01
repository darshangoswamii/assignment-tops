//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main()
{
	int no,i=0 ,count=0 ,sum=0;
	printf("Enter the 10 number of sum :");
	
	while(count<10)
	{
		printf("\nEmter the %d number :",count +1);
		scanf("%d",&no);
		sum = sum + no;
		
		count++;
	}
	printf("\nThe sum of 10 number :%d ",sum);
}
