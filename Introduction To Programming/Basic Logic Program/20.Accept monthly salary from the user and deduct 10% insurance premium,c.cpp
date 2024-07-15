//20.Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.

#include<stdio.h>
int main()
{
	int salary,ipre,loan;
	printf("\nEnter your monthly salary =");
	scanf("%d",&salary);
	
	ipre =(salary * 10)/100;
	loan =(salary * 10)/100;
	salary =salary - (ipre+loan);
	
	printf("\nyour insurance premium is %d and your loan installment is %d",ipre,loan);
	printf("\nyour remaining salary is %d",salary);
}
