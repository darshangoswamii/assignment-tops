#include <stdio.h>
#include <string.h>


int main() {
    char str[1000];
    int freq = 0;
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    for (i = 0; i < len; i++) 
	{
        str[i] = tolower(str[i]);
    }

    for (i = 0; i <= len - 2; i++) 
	{
        if ((strncmp(&str[i], "is", 2) == 0) &&(i == 0 || !isalpha(str[i - 1])) &&    
            (i + 2 == len || !isalpha(str[i + 2]))) 
		{  
            freq++;
            i++;  
        }
    }

    printf("The frequency of the word 'is' is: %d\n", freq);

    return 0;
}

