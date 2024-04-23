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
    ll n,cnt=0,sum=0;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
        cnt=min(sum,cnt);
    }
    cout<<abs(cnt)<<"\n";
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
