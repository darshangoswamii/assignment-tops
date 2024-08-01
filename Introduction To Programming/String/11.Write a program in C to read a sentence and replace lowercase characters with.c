//11.Write a program in C to read a sentence and replace lowercase characters with
//uppercase and vice versa.
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[1000];
    int i = 0;

    printf("Enter a sentence: ");
    gets(sentence);


    while (sentence[i] != '\0') 
	{
        if (islower(sentence[i])) 
		{
        	sentence[i] = toupper(sentence[i]);
        } 
		else if (isupper(sentence[i])) 
		{
        	sentence[i] = tolower(sentence[i]);
        }
        i++;
    }

    printf("uppercase sentence: %s", sentence);

    return 0;
}

