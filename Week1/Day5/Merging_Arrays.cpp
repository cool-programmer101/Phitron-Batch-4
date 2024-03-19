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
    int n,m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int l=0,r=0;
    while(l<n && r<m)
    {
        if(a[l]<b[r])
        {
            cout<<a[l]<<" ";
            l++;
        }
        else
        {
            cout<<b[r]<<" ";
            r++;
        }
    }
    while(l<n)
    {
        cout<<a[l]<<" ";
        l++;
    }
    while(r<m)
    {
        cout<<b[r]<<" ";
        r++;
    }
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
