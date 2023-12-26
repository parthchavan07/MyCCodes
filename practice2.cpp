#include<stdio.h>
int main ()
{
    int n , sum;
    printf("enter till what value you want cube : ");
    scanf("%d",&n);
        for(int i = 1; i <= n ; i++)
        {
        sum = i*i*i;
        printf("cube of %d is :%d\n",i,sum);
        }
        return 0;
    
    
}