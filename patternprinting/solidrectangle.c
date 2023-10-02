
#include <stdio.h>

int main()
{
    int n;
    int m;
    printf("Enter a Rows :");
    scanf("%d", &n);
    printf("Enter a Columns : ");
    scanf("%d", &m);
    for(int i=1;i<=n;i++){
        
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}