//6. Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include <stdio.h>
int main()
{
    char str[100];
    int alphabets, digits, special, i;

    alphabets = digits = special = i = 0;

    printf("Enter any string : ");
    gets(str);


    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            special++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", special);

    return 0;
}
