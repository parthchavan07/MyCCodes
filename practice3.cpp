#include<stdio.h>
int main ()
{
    int n , sum=0;
    printf("what table do you want : ");
    scanf("%d",&n);
    for ( int i = 1 ; i <= 10 ; i++)
    {
        sum = n * i;
        printf("%d X %d = %d\n",n,i,sum);
    }
    return 0;
}