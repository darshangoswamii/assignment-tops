//32.Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include<stdio.h>
int main()
{
	int gross,hra,da,sum,basic;
	printf("\nEnter the baice salary = ");
	scanf("%d",&basic);
	
	if (basic<=10000)
	{
		hra = basic * 0.2;
		da = basic * 0.8;
	}
	else if(basic<= 20000)
	{
		hra = basic * 0.25;
		da = basic * 0.9;
	}
	else if(basic<= 30000)
	{
		hra = basic * 0.3;
		da = basic * 0.95;
	}
	gross = basic + hra + da;
	
	printf("\nTotal gross salary is %d",gross);
	
	return 0;
	
}

