#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int x1;
    int y1;
    printf("Enter a x1:");
    scanf("%d", &x1);
    printf("Enter a y1:");
    scanf("%d", &y1);
    if (x1 == 0 && y1 == 0)
    {
        printf("Point lies on the center ");
    }
    else if (y1 == 0)
    {
        printf("Point lies on the Y-axis ");
    }
    else if (x1 == 0)
    {
        printf("Point lies on the Y-axis ");
    }
    
    else
    {
printf("Points lies on XY plane ");
    }
    return 0;
}
