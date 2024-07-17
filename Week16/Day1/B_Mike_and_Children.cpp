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
    ll n;
    cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<ll,ll>mp;
    sort(a);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mp[a[i]+a[j]]++;
        }
    }
    ll mx=INT_MIN;
    for(auto it:mp)
    {
        mx=max(mx,it.second);
    }
    cout<<mx<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //ll test;
    //cin>>test;
    //while(test--)
    //{
        solve();
    //}
    return 0;
}
