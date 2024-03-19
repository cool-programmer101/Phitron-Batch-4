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
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int l=0,r=0;
    ll ans=0;
    while(l<m && r<n)
    {
        int cnt=0,cnt1=0,cur=a[l];
        while(a[l]==cur && l<n)
        {
            cnt++;
            l++;
        }
        while(cur>b[r] && r<m)
        {
            r++;
        }
        while(b[r]==cur && r<m)
        {
            cnt1++;
            r++;
        }
        ans+=(1LL*cnt*cnt1);
    }
    cout<<ans<<"\n";
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
