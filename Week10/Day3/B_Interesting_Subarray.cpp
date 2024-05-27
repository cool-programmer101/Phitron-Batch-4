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
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>=2) 
        {
            cout<<"YES\n";
            cout<<(i-1)<<" "<<i<<"\n";
            return;
        }
    }
    cout<<"NO\n";
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
