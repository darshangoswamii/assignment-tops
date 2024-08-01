//13.WAP to accept 5 numbers from user and check entered number is even or odd
//using of array
#include <stdio.h>
void main()
{
    int n,i,arr[100];
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
 
    for(i=0;i<n;i++)
    {
        printf("Enter %d elements in the array: ",i);
		scanf("%d",&arr[i]);
    }
 
    printf("Even numbers in the array are: ");
    for (i = 0; i < n; i++) 
	{
        if (arr[i] % 2 == 0) 
		{
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers in the array are: ");
    for(i=0;i<n;i++)
    {
        if(arr[i] % 2!=0)
        {
        	printf("%d ", arr[i]);	
		}      
    }
}
