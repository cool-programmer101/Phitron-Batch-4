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
    ll n,cnt=0,mx=0,x=0;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>mp;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
        mp[a[i]]++;
		mx=max(mx,mp[a[i]]);
	}
		mp.clear();
		x=n-mx;
		while(mx<n) 
		{
		    x++;
		    mx*=2;
		    //cout<<mx<<" ";
		}
		//cout<<endl;
		cout<<x<<endl;
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
