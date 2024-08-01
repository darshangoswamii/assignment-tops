//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>

int main() {
    int n,i;
    int sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
	{
        sum =sum + i * i;  
    }

    printf("\nSum of squares (1*1) + (2*2) + ... + (%d*%d) = %d", n, n, sum);

    return 0;
}

