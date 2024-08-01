//8. Write a program in C to count the total number of vowels or consonants in a
//string.
#include <stdio.h>
int main()
{
    char str[100];
    int vowel, consonants, i;

    vowel = consonants = i = 0;

    printf("Enter any string : ");
    gets(str);


    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            vowel++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            consonants++;
        }

        i++;
    }

    printf("vowel = %d\n", vowel);
    printf("consonants = %d\n", consonants);

    return 0;
}
