//17.Calculate 5 numbers from user and calculate number of even and odd using
//of while loop
#include<stdio.h>
int main()
{
	int no,even=0,odd=0,i=0;
	printf("\nEnter the 5 value :");
	
	while(i<5)
	{
		printf("\nEnter the %d value",i+1);
		scanf("%d",&no);
		if(no%2==0)
		{
			even++;
		}
		if(no%2==1)
		{
			odd++;
		}
		i++;
	}
	printf("\nTotal Even number is %d :",even);
	printf("\nTotal Odd number is %d :",odd);
}
