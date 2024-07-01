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
    ll x,y,k,ans=0;
    cin>>x>>y>>k;
    ll xx=y-(x%y);
    while(k>=xx)
    {
        k-=xx;
        x+=xx;
        while(x%y==0)
        {
            x/=y;
        }
        xx=y-(x%y);
        if(x==1)
        {
            k=k%xx;
            x+=k;
            k=0;
            break;
        }
    }
    x+=k;
    cout<<x<<"\n";
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
