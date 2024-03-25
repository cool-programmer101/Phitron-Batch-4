#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
void solve()
{
    ll n,s,l=0,r=0,sum=0,ans=0;
    cin>>n>>s;
    vector<ll>a(n);
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    
    while(r<n)
    {
        sum+=a[r];
        if(sum<=s) 
        {
            ans=max(ans,r-l+1);
        }
        else 
        {
            sum-=a[l];
            l++;
        }
        r++;
    }

    cout<<ans<<'\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
