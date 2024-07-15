//37.Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf(" %c charter is vowel",ch);
	}
	else
	{
		printf("%c charter is consonant",ch);
	}
	return 0;
}
