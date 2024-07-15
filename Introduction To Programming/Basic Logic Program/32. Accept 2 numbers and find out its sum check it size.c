//32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
void main()
{
	int n1,n2,sum,size;
	printf("Enter Number:");
	scanf("%d",&n1);
	printf("Enter Number:");
	scanf("%d",&n2);
	sum=n1+n2;
	printf("Sum is:%d",sum);
	printf("\nsize is:%d",sizeof(int));
}
