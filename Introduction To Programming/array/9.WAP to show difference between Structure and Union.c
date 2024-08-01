//9.WAP to show difference between Structure and Union
#include<stdio.h>
struct st
{
	int a;
	char b;
}ok;
union ut
{
	int a;
	char b;
}ko;
int main()
{
	struct st;
	union ut;
	
	printf("\n Enter Structure A value =");
	scanf("%d",&ok.a);
	printf("\n Enter Structure b value =");
	scanf(" %c",&ko.b);
	ko.a=ok.a;
	printf("\n Structure variable A value = %d",ok.a);
	printf("\n Structure variable b value = %c",ok.b);
	printf("\n Union variable A value = %d",ko.a);
	printf("\n Union  variable b value = %c",ko.b);
	
}
