//3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers
#include<stdio.h>
int main()
{
	int even=0,odd=0,osum=0,esum=0,sum,no,i;
	printf("Enter the 10 number :");
	
	for(i=1;i<=10;i++)
	{
		printf("\nEnter the %d number= ",i);
		scanf("%d",&no);
		if(no%2==0)
		{
			even++;
			esum= esum + no;
		}
		else 
		{
			odd++;
			osum= osum + no;
		}
	}
	printf("\nTotal Even number is %d",even);
	printf("\nTotal odd number is %d",odd);
	printf("\nTotal Even sum number is %d",esum);
	printf("\nTotal Odd sum number is %d",osum);
	
	return 0;
}

