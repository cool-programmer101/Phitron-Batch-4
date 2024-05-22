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
    vll a;
    if(n==2 || n==3) cout<<"NO SOLUTION\n";
    else if(n%2)
    {
        for(int i=1;i<n;i+=2) a.pb(i);
        a.pb(n);
        for(int i=2;i<n;i+=2) a.pb(i);
    }
    else 
    {
        for(int i=n-1;i>=1;i-=2) a.pb(i);
        for(int i=n;i>=2;i-=2) a.pb(i);
    }
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
