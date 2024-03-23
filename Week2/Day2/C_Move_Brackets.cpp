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
    string s;
    cin>>s;
    ll a=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(') 
        a--;
        else 
        {
            a++;
            cnt=max(cnt,a);
        }
    }
    cout<<cnt<<"\n";
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
