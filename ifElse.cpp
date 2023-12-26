#include<stdio.h>
int main()
{
    float price;
    float payableAmount;
    puts("Enter retail price :");
    scanf("%f",&price );
    if (price >= 500)
    {
    puts("eligible of discount ");
    payableAmount=price*0.9;
    }
    else
    {
    puts("Not eligible of discount ");
    payableAmount=price;
    }
    printf("Discount got : RS %.1f\n",price-payableAmount);
    printf("payable amount : RS %.1f",payableAmount);
    return 0;
}