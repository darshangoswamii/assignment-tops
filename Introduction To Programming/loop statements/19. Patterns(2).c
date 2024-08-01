//19. Patterns:
/*Enter the number of rows: 5
A
B C
D E F
G H I J
K L M N O
*/
#include <stdio.h>

int main() {
    int row, i, j;
    char ch = 'A';  
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    for (i = 1; i <= row; i++)
	{
        for (j = 0; j < i; j++) 
		{ 
            printf("%c ", ch);   
            ch++;                 
        }
        printf("\n");
    }
    
    return 0;
}

