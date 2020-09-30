#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    int d[n+1];
    memset(d,0,sizeof d);
    for(int i=0;i<n;i++)
    {
        if(!i)
        {
            d[i]=a[i];
            continue;
        }
        if(a[i]==d[i-1])
        {
            if(b[i]==d[i-1])
            {
                d[i]=c[i];
            }
            else
            {
                d[i]=b[i];
            }
        }
        else d[i]=a[i];
 
    }
    if(n>=2)
    {
        if(d[n-1]==d[0])
        {
 
            if(a[n-1]==d[0])
            {
                if(d[n-2]==b[n-1])
                {
                    d[n-1]=c[n-1];
                }
                else
                {
                    d[n-1]=b[n-1];
                }
            }
            else if(b[n-1]==d[0])
            {
                if(d[n-2]==a[n-1])
                {
                    d[n-1]=c[n-1];
                }
                else
                {
                    d[n-1]=a[n-1];
                }
            }
            else
            {
                if(d[n-2]==b[n-1])
                {
                    d[n-1]=a[n-1];
                }
                else
                {
                    d[n-1]=b[n-1];
                }
 
            }
 
        }
    }
    for(int i=0;i<n;i++) cout<<d[i]<<" ";
    cout<<endl;
    }
 
 
}