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
    vll a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll x=0,y=0,ans=0,anc=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i]) x+=a[i];
        else if(a[i]<b[i]) y+=b[i];
        else if(a[i]==1) ans++;
        else if(a[i]==-1) anc++;
    }
    while(ans--)
    {
        if(x<y) x++;
        else y++;
    }
    while(anc--)
    {
        if(x>y) x--;
        else y--;
    }
    cout<<min(x,y)<<"\n";
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