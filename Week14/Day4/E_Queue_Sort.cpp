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
    ll mn=0,mnx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<mn)
        {
            mn=a[i];
            mnx=i;
        }
    }
    for(int i=mnx;i<n;i++)
    {
        if(a[i]>a[i+1])
        cout<<"-1\n";
        return;
    }
    cout<<mnx<<"\n";
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