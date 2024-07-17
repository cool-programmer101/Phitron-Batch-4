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
bool pali(vector<ll> &v)
{
    ll n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v[n-i-1]) return false ;
    }
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    vll a(n),a1,a2;
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1 || n==2)
    {
        cout<<"yes\n"; return;
    }
    ll x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            x=a[i];
            y=a[n-i-1];
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=x) a1.pb(a[i]);
        if(a[i]!=y) a2.pb(a[i]);
    }
    
    if(pali(a1) || pali(a2)) cout<<"yes\n";
    else cout<<"no\n";
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
