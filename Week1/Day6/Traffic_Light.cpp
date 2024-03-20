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
    char ch;
    cin>>ch;
    string s,s1;
    cin>>s;
    s+=s;
    ll cnt=-1,mx=INT_MIN;
    for(int i=n*2;i>=0;i--)
    {
        if(s[i]=='g') cnt=i;
        else if(s[i]==ch)
        {
            mx=max(mx,cnt-i);
        }
    }
    if(ch=='g') cout<<"0\n";
    else cout<<mx<<"\n";
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
