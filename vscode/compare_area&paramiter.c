#include<stdalign.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int are = a * b;
    int per = 2 * (a + b);
    printf("Enter length :");
    scanf("%d", &a);
    printf("Enter wedth :");
    scanf("%d", &b);
    
    if (are > per)
    {
        printf("Area is greater than perimeter");
    }
    else if (are = per)
    {
        printf("Area and perimeter is same");
    }
    
    else{
        printf("Area is less than perimeter ");
    }
    
    return 0;
}
