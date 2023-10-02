#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[4
    ];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter %d element of arry :- ",i+1);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 4; j++)
    {
       if  (j % 2 == 0)    arr[j] += 10;
       else arr[j] = 2 ;
    }
       for (size_t i = 0; i < i; i++)
       {
       printf("%d",arr[i]);
       }
    
       

    return 0;
}
