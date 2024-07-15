//19.Calculate compound interest
/*19.Calculate compound interest
Formula
A = P(1 + r/n )^nt
A	=	final amount
P	=	initial principal balance
r	=	interest rate
n	=	number of times interest applied per time period
t	=	number of time periods elapsed
*/
#include <stdio.h>
void main()
{
	float p,r,n,t,a,ans,an;
	
	printf("\nEnter initial principal balance:");
	scanf("%f",&p);
	printf("\nEnter interest rate:");
	scanf("%f",&r);
	printf("\nEnter number of times interest applied per time period:");
	scanf("%f",&n);
	printf("\nEnter number of time periods elapsed:");
	scanf("%f",&t);
	float N=n*t;
	//A = P(1 + r/n )^nt
	//ans = p * pow((1 + r / n), (n * t));
	float po = pow((1 + r / n), (n * t));
	ans= p* po;
	/*a=(1 + r/n);
	an=pow(a,N);
	//ans=pow(a,N);
	printf("%.2f",an);
	ans=p * an;
	printf("%.2f",an);*/
	printf("compound interest:%.2f",ans);
	
}

