//6. Find the Character Is Vowel or Not
#include<stdio.h>
void main()
{
	char any;
	printf("\nEnter the character=");
	scanf(" %c",&any);
	
	if (any=='a'|| any=='e' || any=='i'|| any=='o' || any=='u' || any=='A' || any=='E' || any=='I' || any=='O' || any=='U')
	{
		printf("\n %c is vowel character",any);
	}
	else
	{
		printf("\n %c is not vowel character",any);
	}
}
