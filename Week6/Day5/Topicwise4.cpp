#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
ll k,n,ans;
vector<ll> a;
bool good(ll x)
{
	ll temp=x;
	x*=k;
	for(auto el : a)
		x-=min(temp,el);
	return x<=0;
}
void solve()
{
    ll l,r,mid,i;
	cin>>k>>n;
	a.resize(n);
	for(i=0;i<n;i++)
		cin>>a[i];

	l=0,r=1e12;
	while(l+1<r)
	{
		mid=(l+r)/2;
		if(good(mid))
			l=mid;
		else
			r=mid;
	}
	cout<<l;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*ll test;
    cin>>test;
    while(test--)
    {*/
        solve();
    
    return 0;
}
