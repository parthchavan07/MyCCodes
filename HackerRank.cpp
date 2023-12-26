#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,sum2=0;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        string m;
        cin>>m;
        int r,b;
        cin>>r>>b;
        if(m=="apartment")
        {
            sum2++;
        }
        if(r==b)
        {
            sum=sum+r*50+b*100;
        }
        else
        {
            sum=sum+r*50+100*b;
        }
    }
     cout<<sum+sum2*100;
     return 0;
}