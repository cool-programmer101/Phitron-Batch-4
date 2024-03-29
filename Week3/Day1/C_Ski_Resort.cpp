#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,q,cnt=0,ans=0;
        cin>>n>>k>>q;
        int a[n];
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
        if(a[i]<=q)
            cnt++;
        else
            cnt=0;

        if(cnt>=k)
            ans+=(cnt-k+1);
        }
        cout<<ans<<endl;
    }
}