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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll freq[26]={0};
    for(int i=0;i<n;i++)
    {
        int val=s[i]-'a';
        freq[val]++;
    }
    ll cnt=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]%2)cnt++;
    }
    if(cnt>k+1 && n!=1) cout<<"NO\n";
    else cout<<"YES\n";
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
