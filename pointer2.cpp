#include<stdio.h>
int main()
{
    int num[] = {10 , 20 , 30 , 40 , 50 , 60};
    int *p;
    p = &num[5];
    for (int i = 5 ; i >= 0 ; i--)
    {
        printf("For index value %d value is %d\n",i , *p);
        p--;
    }
    return 0;
}