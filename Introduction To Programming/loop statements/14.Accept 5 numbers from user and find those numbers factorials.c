//14.Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
int main()
{
    int n,i,f,k;
    f=1;
	i=1;
    printf("Enter 5 Number to Find Factorial: ");
    
    for(k=1;k<=5;k++)
    {
    	printf("\nEnter the %d :",k);
		scanf("%d",&n);
	
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
 	}
    return 0;
}
