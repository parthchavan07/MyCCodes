#include<stdio.h>
int main()
{
    int i , n , sum = 0 ;
    float avg , par;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    { 
        sum = sum + i;
    }
    printf("sum is : %d\n",sum);
    par = i - 1;
    avg = sum / par;
    printf("average is :%.2f",avg);
    return 0;
}