#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int digitCount = 0;
    int temp = n;
    
    // Calculate the number of digits
    while (temp != 0)
    {
        temp = temp / 10;
        digitCount++;
    }
    
    printf("The number of digits is: %d\n", digitCount);
    
    return 0;
}
