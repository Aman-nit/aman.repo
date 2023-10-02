#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5];
    for (int  i = 0; i < 5; i++)
    {
    printf("Roll number %d enter your mask :-", i+1);
    scanf("%d ", &arr[i]);
    }
    
    return 0;
}
