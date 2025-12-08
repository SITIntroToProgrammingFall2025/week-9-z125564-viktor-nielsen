#include <stdio.h>

int main(void)
{   int rgb[2];
    int r, g, b;
    double r_first_digit;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &rgb[i]);
    }
    printf("The hex code is #%x%x%x", rgb[0], rgb[1], rgb[2]);
}