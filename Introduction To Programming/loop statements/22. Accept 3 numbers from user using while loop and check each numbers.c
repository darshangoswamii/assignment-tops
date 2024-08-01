//22. Accept 3 numbers from user using while loop and check each numbers
//palindrome
#include<stdio.h>
int main()
{
	int no,rev=0,rem,original;
	printf("\nEnter the number : ");
	scanf("%d",&no);
	
	original=no;
	
	while(no!=0)
	{
	rem = no % 10;
        rev = rev * 10 + rem;
        no /= 10;
    }

    if (original == rev)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

