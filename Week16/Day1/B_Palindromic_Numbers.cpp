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
    ll n;
    cin>>n;
    string s,s1,s2;
    cin>>s;
    int sz=s.size();
    int x=0;
    //cout<<sz<<" "<<x<<"\n";
    if(s[0]!='9')
    {
        s1=string(n,'9');
    }
    else 
    {
        s1=string(n+1,'1');
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        int t=s1[i]-s[i]-x;
        if(t<0)
        {
            t+=10;
            x=1;
        }
        else 
        x=0;

        s2+='0'+t;
    }
    reverse(s2.begin(),s2.end());
    cout<<s2<<"\n";
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
