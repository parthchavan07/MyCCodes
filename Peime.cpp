#include<stdio.h>
int main ()
{
    int i , sum;
    for ( i = 0; i <= 100; i++)
    {
        sum = i ;
        if ( sum % i !=0)
        {
            printf("%d",sum);
        }
    }
    return 0;
}