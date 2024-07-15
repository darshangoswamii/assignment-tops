//33. WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
	int week,num;
	printf("\nEnter the week number :=");
	scanf("%d",&num);
	
	switch(num)
	{
		case(1):
		printf("\nMonday");
		break;
		case(2):
		printf("\nTuesday");
		break;
		case(3):
		printf("\nWednesday");
		break;
		case(4):
		printf("\nThursday");
		break;
		case(5):
		printf("\nFriday");
		break;
		case(6):
		printf("\nSaturday");
		break;
		case(7):
		printf("\nSunday");
		break;
		default: 
        printf("Invalid input! Please enter week number between 1-7");
		
		return 0;
		
	}
}
