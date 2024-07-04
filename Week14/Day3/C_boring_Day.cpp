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
    ll n,l,r;
    cin>>n>>l>>r;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum=0,ans=0,j=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<l) continue;
        if(sum<=r)
        {
            ans++;
            j=i+1;
            sum=0;
            continue;
        }
        while(j<=i && sum>r)
        {
            sum-=a[j];
            j++;
        }
        while(sum>=l)
        {
            ans++;
            j=i+1;
            sum=0;
        }
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