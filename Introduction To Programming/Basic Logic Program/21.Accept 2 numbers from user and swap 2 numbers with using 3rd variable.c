//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable

#include<stdio.h>
int main()
{
	int A,B,C,D,E;
	printf("\nswap 2 numbers with using 3rd variable");
	printf("\nEnter the A value =");
	scanf("%d",&A);
	printf("\nEnter the B value =");
	scanf("%d",&B);
	C = A;
	A = B;
	B = C;
	
	printf("\nvalue A =%d and value B =%d",A,B);
	
	printf("\n swap without using 3rd variable");
	printf("\nEnter the D value =");
	scanf("%d",&D);//5=
	printf("\nEnter the E value =");
	scanf("%d",&E);//10=
	
	D = D + E ;//5+10=15
	E = D - E ;//15-10=5
	D = D - E ;//15-5=10
	printf("\nvalue D =%d and value E =%d",D,E);
	
	return 0;
	
}
