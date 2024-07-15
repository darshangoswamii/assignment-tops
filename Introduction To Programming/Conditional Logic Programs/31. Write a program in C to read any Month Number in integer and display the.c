//31. Write a program in C to read any Month Number in integer and display the
//number of days for this month.
#include <stdio.h> 
void main()
{
   int month;  
   printf("Input Month No : ");  
   scanf("%d",&month); 

   switch(month)
   {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	       printf("\nMonth have 31 days");  
	       break;
	case 2:
	       printf("\nThe 2nd month is a February and have 28 days");  
	       printf("\nin leap year The February month  Have 29 days");
	       break;
	case 4:
	case 6:
	case 9:
	case 11:
	       printf("\nMonth have 30 days"); 
	       break;
	default:
	       printf("\nInvalid Month number Please try again ....");  
	       break;
      }
}
