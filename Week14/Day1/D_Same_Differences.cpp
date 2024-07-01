#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(),a.end());
#define srt(b) sort(b.begin(),b.end(),greater<int>());
#define mod 1000000007
void solve()
{
    ll n,ans=0;
    cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        x-=i;
        ans+=mp[x];
        mp[x]++;
    }
    cout<<ans<<"\n";
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
