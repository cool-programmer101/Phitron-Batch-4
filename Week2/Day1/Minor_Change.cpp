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
    string s,t;
    cin>>s>>t;
    ll i=0,cnt=0;
    while(i<s.size())
    {
        if(s[i]!=t[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }*/
    solve();
    return 0;
}
