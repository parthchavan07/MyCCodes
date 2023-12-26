#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=1;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
               sum=arr[j]*arr[k];
                arr[i]=sum;
            }
        }
        printf("%d",sum);
    }
    
    return 0;
}