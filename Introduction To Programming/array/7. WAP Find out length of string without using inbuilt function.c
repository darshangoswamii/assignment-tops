//7. WAP Find out length of string without using inbuilt function

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);
    while (str[length] != '\0') 
	{
        length++;
    }

    printf("\nLength of the string: %d", length);

    return 0;
}

