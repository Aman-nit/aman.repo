#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,c;
    printf("Enter number of rows :");
    scanf("%d",&r);
    printf("Enter number of columns :");
    scanf("%d",&c);
    printf("Enter the elements \n");
    int arr[r][c];//r*c= totalnumber of elements 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
             scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \n",arr[i][j]);
        }
     }
      int  sum =0 ;
        for (int i = 0; i < r; i++)
        {
        for (int j = 0; j < c; j++)
        {
           sum = sum + arr[i][j];
        }
        
        }
     printf("Sum of all the elements in arry :-%d", sum);
    return 0;
}
