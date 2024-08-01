//4. WAP to print table up to given numbers
#include<stdio.h>
int main()
{
	int no,i;
	printf("Enter the number for table :");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("\n%d  *  %d  = %d",no,i,no*i);
	}
	
	return 0;
}
