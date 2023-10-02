#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter an odd number :");
    scanf("%d", &n);
    if (n%2 != 0){
    int nsp=n/2;
    int ml = n/2+1;
    int nst=1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <=nsp; k++)
{
printf(" ");
}
for (int j = 1; j <= nst; j++)
{
   printf("*");
}
if (i<ml) {
    nsp--;
    nst+=2;
}
else
{
    nsp++;
    nst-=2;
}


printf("\n");
    }}
    else printf("Enter a odd number please");
    return 0;
}
