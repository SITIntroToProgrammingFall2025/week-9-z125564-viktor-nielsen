#include <stdio.h>

int main()
{   int matrix[3][3];
    int new_matrix[3][3];
    int i, j, ad, bc, total; 
    for (i = 0; i < 3 ; i++)
    {   
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    
    }
    printf("You entered\n");
    for (i = 0; i < 3 ; i++)
    {   
        for(j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);

        }
        printf("\n");
    }
    new_matrix[0][0] = matrix[0][2];
    new_matrix[1][0] = matrix[1][2];
    new_matrix[2][0] = matrix[2][2];
    new_matrix[0][2] = matrix[0][0];
    new_matrix[1][2] = matrix[1][0];
    new_matrix[2][2] = matrix[2][0];
    new_matrix[0][1] = matrix[0][1];
    new_matrix[1][1] = matrix[1][1];
    new_matrix[2][1] = matrix[2][1];

    printf("Output\n");
    
    for (i = 0; i < 3 ; i++)
    {   
        for(j = 0; j < 3; j++)
        {
            printf("%d ", new_matrix[i][j]);

        }
        printf("\n");
    }
}