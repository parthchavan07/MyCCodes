#include<stdio.h>
int main()
{
    int num=234 ;
    float p ,sum ,result;
    int temp = num;
    while(num>0)
    {
        p=num%10;
        sum=(sum*10)+p;
        num=num/10;
    }
    result=temp-sum;
    result=result-result-result;
    printf("Result is :%.1f",result);
    return 0;
}