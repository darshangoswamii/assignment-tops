//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
	int power1,power2,power3,n;
	printf("\nEnter the number");
	scanf("%d",&n);
	
	power1=n*1;
	power2=n*n;
	power3=n*n*n;
	
	printf("\n %d^1= %d  %d^2= %d %d^3= %d",n,power1,n,power2,n,power3);
	
}
