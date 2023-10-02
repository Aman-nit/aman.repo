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
            for (int k = j+1; k < 6; i++)
            {
                if (arry[i] + arry[j] +arry[k] == x)
            {
                printf("(%d,%d,%d)\n", arry[i], arry[j] ,arry[k]);
                count += 1;
            }
            }
            }
        
        
    }
    
    printf("%d", count);
    return 0;
}
