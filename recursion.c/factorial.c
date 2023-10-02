#include<stdio.h>
#include<math.h>
int factorial (int x){
    if (x<=1) return 1;
    return ( x*factorial(x-1));
}
int main (){
    int n ;
    printf("Enter a number :");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is :-> %d", n,fact);
return 0;
}