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
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll sum=0,mn=INT_MAX;
    for(int i=0;i<n;i++) 
    {
        sum+=v[i];
        if(v[i]%2)
        {
            mn=min(mn,v[i]);
        }
    }
    if(sum%2)
    {
        cout<<sum-mn<<"\n";
    }
    else 
    cout<<sum<<"\n";
}
int main() {
    //ll test;
    //cin>>test;
    //while(test--)
    //{
        solve();
    //}
    return 0;
}
