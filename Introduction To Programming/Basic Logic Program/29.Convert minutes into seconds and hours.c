//Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	int minutes,seconds,hours;
	printf("enter your minutes");
	scanf("%d",&minutes);
	seconds=minutes*60;
	hours=minutes/60;
	printf("Total seconds is= %d Total hours is=%d",seconds,hours);
	
	return 0;
		
}
