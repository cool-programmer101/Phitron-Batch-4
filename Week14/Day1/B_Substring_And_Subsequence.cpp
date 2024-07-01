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
    string a,b;
    cin>>a>>b;
    ll x=a.size(),y=b.size();
    ll ans=x+y;
    for(int i=0;i<b.size();i++)
    {
        int dx=i;
        for(int j=0;j<a.size();j++)
        {
            if(dx<b.size() && a[j]==b[dx]) dx++;
        }
    //cout<<dx<<" "<<i<<"\n";
    ans=min(ans,x+y-dx+i);
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