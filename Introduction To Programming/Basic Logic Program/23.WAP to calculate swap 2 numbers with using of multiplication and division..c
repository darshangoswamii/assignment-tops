//23.WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
	int A,B;
	printf("\nEnter the A value =");
	scanf("%d",&A);
	printf("\nEnter the B value =");
	scanf("%d",&B);
	
	A = A * B;
	B = A / B;
	A = A / B;
	
	printf("\nvalue A =%d and value B =%d",A,B);
}
