#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int sum = 0;
    int last;
    while (n>0)
    {
      last = n % 10;
      sum = sum + last;
      n = n/10;
  
    }
        printf("Sum of last digit is :%d", sum);
    return 0;
}
