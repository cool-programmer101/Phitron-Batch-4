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
        ll n,m;
    	cin>>n;
        vector<ll>a(n);
        string s;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)
        {
			cin>>m>>s;
			for(auto j:s)
            {
				if(j=='D')a[i]++;
				else a[i]+=9;
			}
			cout<<a[i]%10<<' ';
		}
		cout<<endl;
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
