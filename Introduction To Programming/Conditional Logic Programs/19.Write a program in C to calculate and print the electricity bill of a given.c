/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00	    */
	
#include<stdio.h>
int main()
{
	int units, totalAmount, customerID;
	printf("\nEnter the cusomer ID =");
	scanf("%d",&customerID);
	printf("\nEnter the units = ");
	scanf("%d",&units);
	
	
	if (units <= 350) 
	{
        totalAmount = units * 1.20;
    }
    else if (units > 350 && units <= 600) 
	{
        totalAmount = 350 * 1.20 + (units - 350) * 1.50;
    }
    else if (units > 600 && units <= 800) 
	{
        totalAmount = 350 * 1.20 + 250 * 1.50 + (units - 600) * 1.80;
    }
    else if (units > 800) 
	{
        totalAmount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (units - 800) * 2.00;
    }
    else
	{
        printf("Invalid units consumed.\n");
    }
    
    printf("\nyour customer ID is %d",customerID);
    printf("\nUnits Consumed: %d", units);
    printf("\nTotal Amount to be Paid:%d", totalAmount);
    
}
