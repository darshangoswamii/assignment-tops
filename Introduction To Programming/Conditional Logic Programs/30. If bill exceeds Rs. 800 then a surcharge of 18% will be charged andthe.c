//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-
#include<stdio.h>
int main()
{
	float finalbill,bill;
	float charge=0.18;
	printf("\nEnter the your bill amuont :");
	scanf("%f",&bill);
	
	if(bill>800)
	{
		finalbill =  bill +(bill*charge);
		printf("\nYour final bill amount is %f ",finalbill);
		
	}
	else if(bill<256)
	{
		printf("\nYour bill amount is %f plzz purchase more item ",bill);
	}
	else
	{
		printf("\nYour bill amount is Rs %f No surcharge applied.", bill);	
	}
	
	return 0;
	
}

