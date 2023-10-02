#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[4]={1,2,3,4};
    printf("%p", &arr[2]);
    printf("%p", &arr[3]);
    printf("%p", &arr[1]);
    printf("%p", &arr[0]);
    return 0;
}
