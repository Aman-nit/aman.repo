#include <stdio.h>
int str(int n){
  if(n==1 || n==2 || n==3) return n;
    int ans1 = str(n-1);
    int ans2 = str(n-2);
    int ans3 = str(n-3);
    int ans = ans1 + ans2 +ans3;
     return ans;
}
int main (){
    int n;
    printf("Enter number of stairs : ");
    scanf("%d", &n);
  printf("Number of ways to cover %d stairs is:- %d " ,n,str(n));
    
    
    return 0;
}