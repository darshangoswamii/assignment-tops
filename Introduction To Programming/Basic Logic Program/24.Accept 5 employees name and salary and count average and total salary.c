//24.Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	int salary1,salary2,salary3,salary4,salary5,avg,totalsalary;
	printf("\nEnter the Mahesh salary =");
	scanf("%d",&salary1);
	printf("\nEnter the Rakesh salary =");
	scanf("%d",&salary2);
	printf("\nEnter the Kritan salary =");
	scanf("%d",&salary3);
	printf("\nEnter the Harshil salary =");
	scanf("%d",&salary4);
	printf("\nEnter the Parth salary =");
	scanf("%d",&salary5); 
	
	totalsalary = salary1+salary2+salary3+salary4+salary5;
	avg= totalsalary / 5;
	
	printf("\n Mahesh salary is %d",salary1);
	printf("\n Rakesh salary is %d",salary2);
	printf("\n kritan salary is %d",salary3);
	printf("\n Harshil salary is %d",salary4);
	printf("\n Parth salary is %d",salary5);
	printf("\nTotal salary is %d and average ia %d ",totalsalary,avg);
	
	return 0;
}
