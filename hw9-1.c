#include <stdio.h>

int main()
{   int matrix[2][2];
    int i, j, ad, bc, total; 
    for (i = 0; i < 2 ; i++)
    {   
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    
    }
    ad = matrix[0][0] * matrix[1][1];
    bc = matrix[1][0] * matrix[0][1];
    total = ad - bc;
    printf("You entered\n");
    for (i = 0; i < 2 ; i++)
    {   
        for(j = 0; j < 2; j++)
        {
            printf("%d ", matrix[i][j]);

        }
        printf("\n");
    
    }
    printf("Determinant is %d.000000", total);
}