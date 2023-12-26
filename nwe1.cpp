#include<iostream>
#include<string>
using namespace  std;
int main()
{
    string n,p;
    cin>>n>>p;
    string arr={"TH" , "GA" , "IC" , "HA" , "TE" , "LU" , "NI" , "CA"};
    int arr2[8]={800,600,750,900,1400,1200,1100,1500};
    int temp,temp2,sum;
    for(int i=0;i<8;i++)
    {
        if(n==arr[i])
            temp=i;
        else if(p==arr[i])
            temp2=i;
    }
    if(arr2[temp]>arr2[temp2])
        sum=arr2[temp]-arr2[temp2];
    else
        sum=arr2[temp2]-arr2[temp];
    cout<<sum;
    return 0;
}