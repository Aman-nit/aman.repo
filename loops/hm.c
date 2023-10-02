#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a base: ");
    scanf("%d", &a);
    int b;
    printf("Enter a power: ");
    scanf("%d", &b);
int product=1;

      for (int i = 1; i <= b; i++)
      {
        product = product * a;
         printf(" %d raised to the power %d is : %d\n", a,i,product);
      }
     
            return 0;
        
}