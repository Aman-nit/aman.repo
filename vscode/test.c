// Important Question
// **Q : WAP to print the multiplication
// of two matrices given by the user.
#include<stdio.h>
int sum(int c1,int c2,int arr[][c1],int r,int brr[][c2],int c){ // passed by 'i' is stored in 'r' and 'j' in 'c'.
    // c1 and c2 are passed to pass the arrays , Because declaring 2nd dimension is necessary.
    int ressum=0; // resultant sum
    for (int k = 0; k < c1; k++) // As c1=r2 , so both can be used for multiplication.
    {
        ressum=ressum+arr[r][k]*brr[k][c];
    }
    
    return ressum;

}
int main(){
    int r1,c1; // r1 : row , c1 : column
    printf("Enter no. of rows of 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter no. of columns of 1st matrix : ");
    scanf("%d",&c1);
    int arr[r1][c1];
    for (int i = 0; i < r1; i++) // 'i' represents rows (outer loop)
    {
        for (int j = 0; j < c1; j++) // 'j' represents columns (inner loop)
        {
            printf("Enter element of cell (%d,%d) of 1st matrix : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    // Printing 1st array
    printf("The 1st input array is : \n");
    for (int i = 0; i < r1; i++) // 'i' represents rows (outer loop)
    {
        for (int j = 0; j < c1; j++) // 'j' represents columns (inner loop)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); // Line change for next row
    }

    int r2,c2; // r2 : row , c2 : column
    printf("Enter no. of rows of 2nd matrix : ");
    scanf("%d",&r2);
    printf("Enter no. of columns of 2nd matrix : ");
    scanf("%d",&c2);
    int brr[r2][c2];
    for (int i = 0; i < r2; i++) // 'i' represents rows (outer loop)
    {
        for (int j = 0; j < c2; j++) // 'j' represents columns (inner loop)
        {
            printf("Enter element of cell (%d,%d) : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }

    // Printing 2nd array
    printf("The 2nd input array is : \n");
    for (int i = 0; i < r2; i++) // 'i' represents rows (outer loop)
    {
        for (int j = 0; j < c2; j++) // 'j' represents columns (inner loop)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n"); // Line change for next row
    }
    if(c1!=r2) {
        printf("\nThe input matrices cannot be multiplied.\nTo mutiply 2 matrices A and B, no. of columns of A must be equal to number of rows of B.");
        return 0;
    }
    int crr[r1][c2]; // resultant matrix of r1 rows and c2 columns
    for (int i = 0; i < r1; i++) // taking input
    {
        for (int j = 0; j < c2; j++)
        {
            crr[i][j]=sum(c1,c2,arr,i,brr,j); // calling sum
        }
        
    }

    // Printing resultant Matrix
    printf("Resultant of matrix multiplication is %dx%d Matrix : \n",r1,c2);
    for (int i = 0; i < r1; i++) // taking input
    {
        for (int j = 0; j < c2; j++)
        {
        printf("%d ",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}