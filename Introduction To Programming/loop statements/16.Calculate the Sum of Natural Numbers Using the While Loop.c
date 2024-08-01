//16.Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main()
{
	int no,sum=0,i=1;
	printf("\nEnter the value of no :");
	scanf("%d",&no);
	
	while(i<=no)
	{
		sum = sum + i;
		i++;
	}
	
	printf("\nThe sum of first %d natural numbers is: %d",no,sum);
	
	return 0;
}
