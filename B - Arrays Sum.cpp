#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
set<int> s;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        s.clear();
 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
 
    int ans;
        n=s.size();
        if(k==1 &&n==1)
        {
            ans=1;
        }
        else if(k<2)
        {
            ans=-1;
        }
        else
        {
            ans=ceil((n-1)/(k-1));
        }
 
cout<<ans<<"\n";
}
}