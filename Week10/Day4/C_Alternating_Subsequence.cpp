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
    ll sum=0,mx=0;
    int i=0;
    while(i<n)
    {
     mx=a[i];   
        if(a[i]>0)
        {
            while(a[i]>0 && i<n)
            {
                mx=max(mx,a[i]);
                i++;
            }
        }
        else 
        {
            while(a[i]<0 && i<n) 
            {
                mx=max(mx,a[i]);
                i++;
            }
        }
    sum+=mx;
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
