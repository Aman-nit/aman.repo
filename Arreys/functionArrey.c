#include <stdio.h>
int main (){
    printf  ("Enter year : ");
    int x,a,b,c,d;
    scanf("%d",&x);
    a=x/1000 , b = (x-1000*a)/100,c=(x-1000*a-100*b)/10;
    d= (x-1000*a-100*b-10*c);
     if (c+d!=0 & x%4==0){
        printf("%d is a leap year.",x);
    }
    if (c+d==0 & x%400==0){
        printf("%d is a leap year.",x);
    }
   
    if(c+d!=0 & x%4!=0,c+d==0 & x%400!=0) {
        printf ("%d is not a leap year.",x);
    }
    return 0;
}