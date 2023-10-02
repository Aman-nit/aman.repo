#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int arry[5]={1,3,4,7,8};
    printf("Enter a number:-");
    scanf("%d", &x);
    int a=0;
    for (int i = 0; i < 5; i++)
    {
        if (x>arry[i])
        {
            // int b=0;
            a +=1;

        
        }
        
    }
       printf("%d",a);
    return 0;
}
