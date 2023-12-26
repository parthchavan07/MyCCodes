#include<stdio.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            a++;
        }
    }
    printf("%d\n",a);
    return 0;
}