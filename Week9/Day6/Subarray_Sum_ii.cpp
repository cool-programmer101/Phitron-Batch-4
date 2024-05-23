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
    ll n,x,j=0,cnt=0;
    cin>>n>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
	ll ps = 0;
	ll ans = 0;
	map<ll,ll> sum;
	sum[0] = 1;

	for (auto xx : a)
	{
		ps += xx;
		ans += sum[ps - x];
		sum[ps]++;
	}
	cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
        solve();
    
    return 0;
}
