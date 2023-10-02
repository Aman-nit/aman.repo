#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter an odd number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
for (int j = 1; j <= n; j++)
{
    int a = (n/2)+1;
    if (i == a || j == a ) printf("*");
    else  printf(" ");
}
printf("\n");
    }
    return 0;
}
