//Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?
#include<stdio.h>
int main()
{
	int apples=5;
	int students,totalapple;
	printf("number of students");
	scanf("%d",&students);
	totalapple=apples*students;
	printf("required apples=%d",totalapple);
	
	
}
