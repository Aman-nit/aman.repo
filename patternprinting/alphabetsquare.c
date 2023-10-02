#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    
    {  
      int a=1;     
        for (int j =1; j <= n; j++)
        {
          int d = j+64;
          char ch = (char)d;
printf("%c", ch) ; 
  }
       printf("\n"); 
    }
    
    return 0;
}
