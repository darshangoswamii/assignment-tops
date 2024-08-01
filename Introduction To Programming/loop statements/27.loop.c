//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n
#include <stdio.h>

int main() {
    int n,i;
    float term;
    float sum = 0.0;  
    int sign = 1;    

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; ++i) {
        term = i / (i + 1);  
        sum =sum + sign * term;  
        sign = -sign;       
    }

    printf("\nSum of the series 1/2 - 2/3 + 3/4 - 4/5 + ... + %d/(%d+1) = %.4f", n, n, sum);

    return 0;
}

