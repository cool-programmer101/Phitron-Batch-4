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
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n+1);
    for(int i=1;i<n;i++)
    cin>>a[i];
    while(q--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        ll sum=0;
        for(int i=1;i<l;i++) sum+=a[i];
        for(int i=l;i<=r;i++) sum+=k;
        for(int i=r;i<=n;i++) sum+=a[i];
        if(sum%2) cout<<"YES\n";
        else cout<<"NO\n";
        sum=0;
    }
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
