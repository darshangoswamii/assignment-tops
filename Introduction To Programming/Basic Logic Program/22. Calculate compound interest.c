//22. Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include <stdio.h>
#include <math.h>

int main() 
{
    double P, R, t, Amount, CompoundInterest;

    printf("Enter the principal amount (P): ");
    scanf("%lf", &P);
    printf("Enter the annual interest rate (R in percentage): ");
    scanf("%lf", &R);
    printf("Enter the time in years (t): ");
    scanf("%lf", &t);


    Amount = P * pow((1 + R / 100), t);


    CompoundInterest = Amount - P;

    printf("Amount after %.2f years: %.2f\n", t, Amount);
    printf("Compound Interest earned: %.2f\n", CompoundInterest);

    return 0;
}

