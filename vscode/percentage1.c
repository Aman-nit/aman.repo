#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your mask:");
    scanf("%d", &a);
    if (a >= 80 && a < 100)
    {
        printf("Your grade is A");
                
    }
    else if (a >= 60 && a < 80)
    {
        printf("Your grade is B");
    
    }
     else if (a >= 40 && a < 60)
    {
        printf("Your grade is c");
    
    }
     else if (a >= 0 && a < 40)
    {
        printf("You fail this Examination ");
    
    }
    else {
        printf("Enter a valid number ");
    }
    return 0;
}
