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
    vector<ll> v;
        ll n,sum=0;
        cin>>n;
        sum+=n;
        while(n>0)
        {
            n/=2;
            sum+=n;
        }
        cout<<sum<<endl;
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

