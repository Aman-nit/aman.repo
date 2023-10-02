#include<stdio.h>
int factorial (int x) {
    int fact =1;
    for (int i = 0; i <= x; i++)
    {
        fact = fact*i;
    }
    
return fact;
}


int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number n :");
    scanf("%d", &n);
factorial(int n);
    return 0;
}
