#include <stdio.h>
int str(int n){
  if(n==1 || n==2) return 1;
    int ans1 = str(n-1);
    int ans2 = str(n-2);
    int ans = ans1 + ans2;
     return ans;
}
int main (){
    int n;
    printf("Enter base : ");
    scanf("%d", &n);
  printf("%d" ,str(n));
    
    
    return 0;
}