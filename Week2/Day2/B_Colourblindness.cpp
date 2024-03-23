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
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int i=0,j=0;
    while(i<n)
    {
        if(s1[i]=='B')
        s1[i]='G';
        if(s2[i]=='B')
        s2[i]='G';
        i++;
    }
    if(s1==s2) cout<<"YES\n";
    else cout<<"NO\n";
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
