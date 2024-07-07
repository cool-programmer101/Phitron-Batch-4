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
    string s,t;
    cin>>s>>t;
    ll x=s.size()-1,flag=0;
    if(s[0]==t[0]) cout<<"YES\n"<<s[0]<<"*\n";
    else if(s.back()==t.back()) cout<<"YES\n"<<"*"<<s.back()<<"\n";
    else 
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<t.size();j++)
            {
                if(s[i]==t[j] && s[i+1]==t[j+1])
                {
                    cout<<"YES\n"<<"*"<<s[i]<<s[i+1]<<"*\n";
                    return;
                }
            }
        }
        cout<<"NO\n";
    }
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
