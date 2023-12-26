#include<stdio.h>
int main()
{
    long greater[3];
    for(int i =0 ; i < 3 ; i++)
    {
        printf("enter index %d : ",i);
        scanf("%d",&greater[i]);
    }
    if (greater[0]>greater[1] && greater[0]>greater[2])
    {
        printf("%ld is greater ",greater[0]);
    }
    else if (greater[1]>greater[0] && greater[1]>greater[2])
    {
        printf("%ld is greater ",greater[1]);
    }
    else if (greater[2]>greater[0] && greater[2]>greater[1])
    {
        printf("%ld is greater ",greater[2]);
    }
    else
    {
        printf("Either of the number is equal");
    }
    return 0;
}