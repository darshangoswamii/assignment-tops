//13.calculate the Factorial of a Given Number using while loop
#include <stdio.h>
int main()
{
    int n,i,f;
    f=1;
	i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    return 0;
}

