//1. Write a program to find out the max number from given array using function
#include <stdio.h>
int main() {
  int n,arr[100],i;
  printf("Enter the number : ");
  scanf("%d", &n);

  for (i = 0; i < n;i++) 
  {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; ++i) 
  {
    if (arr[0] < arr[i]) 
	{
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d", arr[0]);

  return 0;
}

