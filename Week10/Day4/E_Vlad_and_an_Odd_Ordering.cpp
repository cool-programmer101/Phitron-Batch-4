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
    ll n,k;
    cin>>n>>k;
    ll i=1;
    while(true)
    {
        if((n+1)/2>=k)
        {
            cout<<i*(2*k-1)<<"\n";
            break;
        }
        else
        {
            k-=(n+1)/2;
            n/=2;
        }
        i*=2;
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
