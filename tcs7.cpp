#include<stdio.h>
int main()
{
    int n=10;
    int k,sum;
    scanf("%d",&k);
    sum=n-k;
    if(k>=1 && k<=5)
    {
    printf("NUMBER OF CANDIES SOLD : %d\n",k);
    printf("NUMBER OF CANDIES LEFT : %d",sum);
    }
    else
    {
        printf("INVALID INPUT \n");
        printf("NUMBER OF CANDIES LEFT :%d",n);
    }
    return 0;
}