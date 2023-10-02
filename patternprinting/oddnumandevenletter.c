#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       if (i%2 == 0){
       for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
       }
       else
       {
        int a=1;     
        for (int k =1; k <= i; k++)
        {
          int d = k+64;
          char ch = (char)d;
printf("%c ", ch) ; 
  }
       printf("\n"); 
       }
       
    }
    
    return 0;
}
