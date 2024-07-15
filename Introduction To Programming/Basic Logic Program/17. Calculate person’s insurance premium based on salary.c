//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
	int salary , premium ;
	float rate;
	printf("\nEnter your salary=");
	scanf("%d",&salary);
	printf("\nEnter your premium rate=");
	scanf("%f",&rate);
	
	premium = salary * rate ;
	
	printf("\nyour insurance premium is %d",premium);
	
	return 0;
}
