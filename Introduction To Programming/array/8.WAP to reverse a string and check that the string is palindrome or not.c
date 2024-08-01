//8.WAP to reverse a string and check that the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i=0,j=0,le=0,count=0;
	printf("\n Enter Name :");
	gets(a);
	while(a[i]!='\0')	
	{
		le++;
		i++;
	}
	for(i=0;a[i]!='\0';i++)
	{
		
		b[i]=a[le-1];
		le--;	
	}
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[j]!=b[j])
			{
				count++;
			}
		}
	}
	if(count!=0)
	{
		printf("\n Not Palindrome");
		
	}
	else
	{
		printf("\n palindrome");
	}
	
}
