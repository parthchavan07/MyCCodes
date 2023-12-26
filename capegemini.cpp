#include<iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    int count=0,arr[1000],x=0,y=0;
    char arr2[1000];
    for(int i=0;i<n.length();i++)
    {
        for(int j=0;j<n.length();j++)
        {
            if(n[i]==n[j])
            {
                count++;
            }
        }
        arr[i]=count;
        x++;
        count=0;
    }
   
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(n[i]==n[j])
            {
                n[j]='\0';
                arr[j]=0;
            }
        }
    }
    string s="\0";
    int a=0;
    for(int i=0;i<x;i++)
    {
        if(n[i]!='\0')
        {
            s=s+n[i];
        }
    }
    int par[s.length()];
    int f=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]!=0)
        {
            par[f]=arr[i];
            f++;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i]<<par[i]; 
    }
    return 0;  
}