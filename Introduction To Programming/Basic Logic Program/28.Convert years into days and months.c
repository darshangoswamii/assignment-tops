//convert years into days and months
#include<stdio.h>
int main()
{
	int years,days,months;
	printf("enter your years");
	scanf("%d",&years);
	days=years*365;
	months=years*12;
	printf("Total days is  %d total month is %d",days,months);
	
	return 0;
		
}
