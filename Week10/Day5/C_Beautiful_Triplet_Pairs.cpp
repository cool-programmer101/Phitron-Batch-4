#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(),a.end());
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<pair<ll,ll>,ll>mp1;
    map<pair<ll,ll>,map<ll,ll>>mp11;
    map<pair<ll,ll>,ll>mp2;
    map<pair<ll,ll>,map<ll,ll>>mp22;
    map<pair<ll,ll>,ll>mp3;
    map<pair<ll,ll>,map<ll,ll>>mp33;
    ll ans=0;
    for(int i=0;i<n-2;i++)
    {
        ll v1=a[i];
        ll v2=a[i+1];
        ll v3=a[i+2];
        if(mp1.count({v1,v2})){
        ll sum=mp11[{v1,v2}][v3];
        ll ttl=mp1[{v1,v2}];
        ans+=(ttl-sum);
        }
        if(mp2.count({v2,v3}))
        {
            ll sum=mp22[{v2,v3}][v1];
            ll ttl=mp2[{v2,v3}];
            ans+=(ttl-sum);
        }
        if(mp3.count({v1,v3}))
        {
            ll sum=mp33[{v1,v3}][v2];
            ll ttl=mp3[{v1,v3}];
            ans+=(ttl-sum);
        }
        mp1[{v1,v2}]++;
        mp11[{v1,v2}][v3]++;
        mp2[{v2,v3}]++;
        mp22[{v2,v3}][v1]++;
        mp3[{v1,v3}]++;
        mp33[{v1,v3}][v2]++;
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
