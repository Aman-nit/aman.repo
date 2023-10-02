#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,c;
    printf("Enter number of rows :");
    scanf("%d",&r);
    printf("Enter number of columns :");
    scanf("%d",&c);
    printf("Enter the elements \n");
    //r*c= totalnumber of elements 
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int min = 0;
    
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > min)
            {
              printf("%d \n",arr[i][j]);
            }
            
            
        }
     }
 
    
    
     
      return 0;
}
