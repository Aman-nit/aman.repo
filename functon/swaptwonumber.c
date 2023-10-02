
#include <stdio.h>

int main() {
int a;
printf("Enter a value a :");
scanf("%d", &a);
int b;
printf("Enter a value b :");
scanf("%d", &b);
int x;
x=a;
a = b;
b = x;
printf("The value of a is %d\n", a);
printf("The value of b is %d", b);

    return 0;
}