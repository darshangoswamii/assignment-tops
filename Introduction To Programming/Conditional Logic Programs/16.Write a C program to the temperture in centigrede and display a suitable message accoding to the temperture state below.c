//16.Write a C program to the temperture in centigrede and display a suitable message accoding to the temperture state below.
#include<stdio.h>

int main()
{
    int temp;
    printf("Enter temperature = ");
    scanf("%d", &temp);
    
    if (temp < 0)
    {
        printf("\nFreezing Weather");
    }
    else if (temp >= 0 && temp < 10)
    {
        printf("\nVery cold Weather");    
    }
    else if (temp >= 10 && temp < 20)
    {
        printf("\nCold Weather");    
    }
    else if (temp >= 20 && temp < 30)
    {
        printf("\nNormal Temperature");    
    }
    else if (temp >= 30 && temp < 40)
    {
        printf("\nHot Temperature");    
    }
    else if (temp >= 40)
    {
        printf("\nVery Hot Temperature");
    }
    else
    {
        printf("\nOk");
    }
    
    return 0;
}

