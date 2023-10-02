#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x ;
    int arry[6] ={2,5,9,4,1,7};
    printf("Enter a number :-");
    scanf("%d", &x);
    int count = 0 ;
    for (int i = 0; i < 6; i++)
    {
        for (int  j = i+1; j < 6; j++)
        {
            if (arry[i] + arry[j] == x)
            {
                printf("(%d,%d)\n", arry[i], arry[j]);
                count += 1;
            }
            
        }
        
        
    }
    
    printf("%d", count);
    return 0;
}
