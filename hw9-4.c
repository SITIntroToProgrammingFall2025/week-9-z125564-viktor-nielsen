#include <stdio.h>

int main(void)
{   int rgb[3];
    int r, g, b;
    double r_first_digit;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &rgb[i]);
    }
    printf("The hex code is #%02X%02X%02X", rgb[0], rgb[1], rgb[2]);
}