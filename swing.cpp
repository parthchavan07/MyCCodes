#include<iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    char temp;
    for(int i=0;i<n.length()/2;i++)
    {
        for(int j=0;j<n.length();j++)
        {
            if(n[i]==n[j])
            {
                temp=n[i];
                n[i]=n[n.length()-1];
                n[n.length()-1]=temp;
            }
        }
    }
    for(int i=0;i<n.length();i++)
    {
        cout<<n[i];
    }
}