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
    ll n,s;
    cin>>n>>s;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll r=0,l=0,mx=0,sum=0,mn=INT_MAX;
    while(r<n)
    {
        sum+=a[r];
        while(sum>=s)
        {
            mx+=(n-r);
            sum-=a[l];
            l++;
        }
            r++;
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
