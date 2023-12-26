#include<stdio.h>
int main()
{
    float num,sum=0;
    do{
        printf("enter number : ");
        scanf("%f",&num);
        sum +=num;
    }while(num != 0);
    printf("sum : %.3f",sum);
    return 0;
}