//24. 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() {
    int n,i;
    int sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) 
	{
        sum =sum + i;
    }

    printf("/nSum of the series 1 + 2 + 3 + ... + %d = %d", n, sum);

    return 0;
}

