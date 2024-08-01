//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n,i,j;
    int sum = 0; 
    int currentSum = 0;  
    printf("Enter a positive number n: ");
    scanf("%d", &n);


    for (i=1;i<=n;i++) 
	{
        currentSum = 0; 
        for (j = 1; j <= i; ++j) 
		{
            currentSum =currentSum + j;
        }

        sum =sum + currentSum;  
    }

    printf("\nSum of the series (1) + (1+2) + ... + (1+2+3+...+%d) = %d",n, sum);

    return 0;
}

