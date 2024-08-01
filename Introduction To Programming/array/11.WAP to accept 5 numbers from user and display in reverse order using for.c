//11.WAP to accept 5 numbers from user and display in reverse order using for
//loop and array
#include <stdio.h>
// Main function
int main()
{
   int i, n, a[100];
     
   printf("\nEnter the array :");
   scanf("%d", &n);


   for (i = 0; i < n; i++)
	{
      printf("element [%d] : ", i);
      scanf("%d", &a[i]);  
	}
   
   printf("\n Original array  :");
   
   for (i = 0; i < n; i++)
	{
       printf("% d", a[i]);  
	}
	
   printf("\n Reverse array  : ");
   for (i = n - 1; i >= 0; i--)
   {
       printf("% d", a[i]);  
   }
   printf("\n\n");
   return 0;
}

