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
    ll n,x=0;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        x^=a[i];
    }
    ll ans=x;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,(x^a[i]));
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
