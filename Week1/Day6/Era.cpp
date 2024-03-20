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
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    ll mx=0,pos=0;
    for(int i=1;i<=n;i++) 
    {
        if(i<a[i])
        mx=max(mx,a[i]-i);
    }
    cout<<mx<<"\n";
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
