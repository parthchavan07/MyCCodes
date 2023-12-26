#include<stdio.h>
int main()
{
    int num1= 10;
    int num2= 20;
    int sum;
    int *p=&num1;
    int *p1=&num2;
    sum=*p + *p1;
    printf("sum is : %d",sum);
    return 0;
}