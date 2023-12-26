#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    int sum=0,sum1=0,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0+count;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                sum=sum+arr[j];
            }
            else if(arr[i]<arr[j])
            {
                sum1=sum1+arr[j];
            }
        }
        sum=sum*sum1;
        arr1[i]=sum;
        sum=0;
        sum1=0;
        count++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}