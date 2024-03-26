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
    ll n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++) cin>>s[i];
    ll mx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll x=0;
            for(int k=0;k<m;k++)
            {
                x+=abs(s[i][k]-s[j][k]);
            }
            mx=min(mx,x);
        }
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
