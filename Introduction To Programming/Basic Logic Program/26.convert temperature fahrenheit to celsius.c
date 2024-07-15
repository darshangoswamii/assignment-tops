//convert temperature fahrenheit to celsius
//(32°F - 32) × 5/9 = 0°C
#include<stdio.h>
int main()
{ 
	float f,c;
	printf("enter temperature fahrenheit");
	scanf("%d",&f);
	c=(f-32)*5/9;
	printf("celsius is =%f",c);

	return 0;

}
