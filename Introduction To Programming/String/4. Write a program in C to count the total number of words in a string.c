//4. Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int i, count = 0;
    
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
        {
            count++; 
        }
    }

    if (strlen(string) > 0)
    {
        count++;
    }

    printf("Total number of words in the string: %d\n", count);

    return 0;
}
 
