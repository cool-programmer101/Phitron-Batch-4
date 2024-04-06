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
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll x=0;
    for(int i=0;i<n;i++)
    {
        x^=a[i];
    }
    if(x==0) cout<<"0"<<endl;
    else{
        if(n%2) cout<<x<<endl;
        else cout<<"-1"<<endl;
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
