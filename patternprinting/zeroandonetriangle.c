/* Online C Compiler and Editor */
#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter a number :");
    scanf("%d", &n);
    int a=1;
    for(int i=1;i<=n;i++){
        // if (i%2==0) a=1; way 1
        // else (a=0);way 1
        for(int j=1;j<=i;j++){ //way 2
            if(i==j || (i+j)%2==0)//way 2
            printf("%d ",a );//way 2
            else printf("0");//way 2
            // if (a==0) a=1;way 1
            // else a=0;way 1
          
            
        }
        printf("\n");
    }
    

    return 0;
}