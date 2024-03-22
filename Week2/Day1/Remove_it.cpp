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
    ll n,x;
    cin>>n>>x;
    vector<int>a(n);
    vector<int>b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=x)
        {
            b.pb(a[i]);
        }
    }
    if(b.size()==0) cout<<"\n";
    else 
    {
        for(int i=0;i<b.size();i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }*/
    solve();
    return 0;
}
