#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf ("Enter first term :");
    scanf ("%d", &a);
        int d;
    printf ("Enter common difference :");
    scanf ("%d", &d);
        int n;
    printf ("Enter number of terms :");
    scanf ("%d", &n);
    
    
    for (int i = a; i <= a+((n-1)*d); i = i+d)
    {
       
        printf("%d\n", i);
            
        
    }
    
    return 0;
}
