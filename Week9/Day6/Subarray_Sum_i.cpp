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
    vll a(n),ps(n);
    ll sum=0,cnt=0;
    ps[sum]=1;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        ps[(sum % n + n) % n]++;
    }
    for(auto x: ps)
    {
        cnt+=x*(x-1)/2;
    }
    cout<<cnt<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
