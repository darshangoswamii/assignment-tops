//9. C Program to Check Uppercase or Lowercase or Digit or Special
//Character
#include<stdio.h>
void main()
{
	char ch;
	printf("\nEnter the character=");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("\nThis is lowercase character");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("\nThis is uppercase character");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\nThis is digit");
	}
	else
	{
		printf("\nThis is special character");
	}
}
