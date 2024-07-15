//4. WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
void main()
{
	int num1,num2,ans;
	char op;
	printf("\nEnter the operator=");
	scanf("%c",&op);
	printf("\nEnter the num1 =");
	scanf("%d",&num1);
	printf("\nEnter the num2 =");
	scanf("%d",&num2);
	
	
	switch(op)
	{
		case '+':
			ans = num1+num2;
			printf("\n%d + %d = %d",num1,num2,ans);
			break;
		case '-':
			ans = num1-num2;
			printf("\n%d - %d = %d",num1,num2,ans);
			break;
		case '*':
			ans = num1*num2;
			printf("\n%d * %d = %d",num1,num2,ans);
			break;
		case '/':
			ans = num1/num2;
			printf("\n%d / %d = %d",num1,num2,ans);
			break;
		default:
      		printf("Error! operator is not correct");
			
	}
}
