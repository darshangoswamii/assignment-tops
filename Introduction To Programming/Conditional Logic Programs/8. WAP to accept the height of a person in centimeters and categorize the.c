//8. WAP to accept the height of a person in centimeters and categorize the
//person according to their height.
#include<stdio.h>
void main()
{
	float hieght;
	printf("\nEnter your hieght =");
	scanf("%f",&hieght);
	
	if(hieght<150.00)
	{
		printf("\nthe proson is Dwarf.");
	}
	else if (hieght>150.00 && hieght<165.00)
	{
		printf("\nthe proson is average hieghted.");
	}
	else if (hieght>165.00 && hieght<195.00)
	{
		printf("\nthe proson is taller.");
	}	
	else
    	printf("Abnormal height.\n");
}
