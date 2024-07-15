//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int maths,science,english,socialscience,hindi,gujarati,computer,totalmarks,percent ;
	printf("enter your marks\n");
	printf("enter your maths mark\n");
	scanf("%d",&maths);
	printf("enter your sicence mark\n");
	scanf("%d",&science);
	printf("enter your english mark\n");
	scanf("%d",&english);
	printf("enter your social science mark\n");
	scanf("%d",&socialscience);
	printf("enter your hindi mark\n");
	scanf("%d",&hindi);
	printf("enter your gujarati mark\n");
	scanf("%d",&gujarati);
	printf("enter your computer mark\n");
	scanf("%d",&computer);
	printf("\t*your result is* \n");
	printf("\tmaths= %d \n\tscience= %d\n \tengshil= %d\n \tsocialscience= %d\n \thindi= %d\n \tgujarati= %d\n \tcomputer= %d",maths,science,english,socialscience,hindi,gujarati,computer);
	totalmarks=maths+science+english+socialscience+hindi+gujarati+computer;
	printf("\n\ttotal mark%d",totalmarks);
	percent=totalmarks/7;
	printf("\n\tyour percent is %d%%",percent );
	if (maths>28 && science>28 && english>28 && socialscience>28 && hindi>28 && gujarati>28 && computer>28)
	{
		printf("\n\tyou are pass in the exam");
	}
	else 
	{
		printf("\n\tyou are fail in the exam");
	}
	
	return 0;
}
