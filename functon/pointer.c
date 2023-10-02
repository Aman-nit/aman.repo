#include<stdio.h>
void swap(int*x , int*y){
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number a :");
    scanf("%d", &a);
     int b;
    printf("Enter a number b :");
    scanf("%d", &b);
    swap(&a ,&b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d", b);
    return 0;
}
