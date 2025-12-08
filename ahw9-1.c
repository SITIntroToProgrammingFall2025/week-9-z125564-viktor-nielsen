#include <stdio.h>

int sq_dist(int r1, int g1, int b1,
            int r2, int g2, int b2)
{
    int dr = r1 - r2;
    int dg = g1 - g2;
    int db = b1 - b2;

    return dr*dr + dg*dg + db*db;
}

int main(void)
{
    int r, g, b;

    scanf("%d %d %d", &r, &g, &b);

    int colors[5][3] = {
        {0,   0,   0},   
        {255, 0,   0},   
        {0,   255, 0},   
        {0,   0,   255}, 
        {255, 255, 255}  
    };

    const char *names[5] = {
        "Black",
        "Red",
        "Green",
        "Blue",
        "White"
    };


    int min_index = 0;
    int min_dist = sq_dist(r, g, b,
                           colors[0][0], colors[0][1], colors[0][2]);

   
    for (int i = 1; i < 5; i++)
    {
        int d = sq_dist(r, g, b,
                        colors[i][0], colors[i][1], colors[i][2]);

        if (d < min_dist) {
            min_dist = d;
            min_index = i;
        }
    }


    printf("The nearest color is:%s\n", names[min_index]);

    return 0;
}