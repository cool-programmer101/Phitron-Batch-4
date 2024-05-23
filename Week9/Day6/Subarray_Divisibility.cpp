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
    vll a(n),ps(n+1);
    for(int i=0;i<n;i++) cin>>a[i]; sort(a.begin(),a.end());
    ll sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum%n==0) cnt++;
    }
    cout<<cnt<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
