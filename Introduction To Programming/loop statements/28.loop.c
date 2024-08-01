//28. 1 2 3 6 9 18 27 54...
#include <stdio.h>

int main() {
    int n,i;
    int sequence[100];  
    sequence[0] = 1;    

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) 
	{
        if (i % 2 == 1) 
		{
            sequence[i] = sequence[i - 1] * 2;
        } 
		else 
		{
            sequence[i] = sequence[i - 1] * 3;
        }
    }

    printf("The sequence is: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", sequence[i]);
    }
    printf("\n");

    return 0;
}

