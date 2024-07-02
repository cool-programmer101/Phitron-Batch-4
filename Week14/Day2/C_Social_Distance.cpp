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
    ll n,k,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    set<ll>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') st.insert(i);
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') 
        {
            auto it=st.lower_bound(i-k);
            if(it==st.end() || *it>(i+k))
            {
                ans++;
                s[i]='1';
                st.insert(i);
            }
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