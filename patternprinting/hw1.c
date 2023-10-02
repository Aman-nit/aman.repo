/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    int n;
    // int m;
    printf("Enter a side of Square :");
    scanf("%d", &n);
    // printf("Enter a Columns : ");
    // scanf("%d", &m);
    for(int i=1;i<=n;i++){
        
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}