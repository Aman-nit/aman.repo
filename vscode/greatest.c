#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("Enter a number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is the greatest among them\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the greatest among them\n", b);
    }
    else
    {
        printf("%d is the greatest among them\n", c);
    }

    return 0;
}
