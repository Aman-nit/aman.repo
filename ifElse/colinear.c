#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");
    scanf("%d", &y2);
    printf("Enter x3: ");
    scanf("%d", &x3);
    printf("Enter y3: ");
    scanf("%d", &y3);

    float m1, m2;

    // Check if the points are vertically aligned
    if (x2 - x1 != 0)
        m1 = (float)(y2 - y1) / (x2 - x1);

    // Check if the points are vertically aligned
    if (x3 - x2 != 0)
        m2 = (float)(y3 - y2) / (x3 - x2);

    if (x2 - x1 == 0 && x3 - x2 == 0)
    {
        printf("Points are vertically aligned\n");
    }
    else if (m1 == m2)
    {
        printf("Points are co-linear\n");
    }
    else
    {
        printf("Points are non co-linear\n");
    }

    return 0;
}
