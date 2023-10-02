#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arry[6] = {8,9,11,19,5,7};
    int sumofeven = 0;
    int sumofodd = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
             sumofeven += arry[i];
        }
       else
       {
        sumofodd += arry[i];
       }
       
    }
    printf("%d", sumofeven - sumofodd);
    
    return 0;
}
