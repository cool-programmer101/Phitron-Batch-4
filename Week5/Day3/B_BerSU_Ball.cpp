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
    for(ll i=0;i<n;i++) cin>>a[i];
    ll m;
    cin>>m;
    vector<ll>b(m);
    for(ll i=0;i<m;i++) cin>>b[i];
    ll cnt=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(ll i=0;i<n;)
    {
        for(ll j=0;j<m;j++)
        {
            if(abs(a[i]-a[j])<=1) 
            {
                cnt++;
                i++;
            }
        }
        i++;
    }
    cout<<cnt<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //ll test;
    //cin>>test;
    //while(test--)
    //{
        solve();
    //}
    return 0;
}
