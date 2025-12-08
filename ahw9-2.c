#include <stdio.h>

int main(void)
{
    int i, j, temp;
    int array[5];

    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 5 - 1; i++) {          
        for (j = 0; j < 5 - 1 - i; j++) {  
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}