#include<stdio.h>
int main(int argc, char const *argv[])
{
    int cost;
    int sell;
    printf("Enter selling price :");
    scanf("%d", &sell);
    printf("Enter cost price :");
    scanf("%d", &cost);
    if (cost > sell)
    {
        int loss;
        loss = cost - sell;

        printf("Opps you sell it in loss :%d", loss);
    }
    else if (cost < sell)
    {
        int profit ;
        profit = sell - cost ;
        printf("you got profit rupees :%d", profit );
    }
    else{
printf("You sell the product with zero loss and zero profit");
    }
    
    return 0;
}
