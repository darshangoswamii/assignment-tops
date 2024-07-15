//18.Calculate person’s Annual salary
#include<stdio.h>
int main() 
{
    int monthlysalary, annualsalary;
    printf("Enter the monthly salary: ");
    scanf("%d", &monthlysalary);

    annualsalary = monthlysalary * 12;

    printf("\nThe annual salary is: %d", annualsalary);

    return 0;
}

