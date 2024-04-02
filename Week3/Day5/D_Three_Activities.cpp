#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
const int N = 1e5 + 10;
int f[10];
int a[3][N];
void solve()
{

		int n;
		cin >> n;
		for(int j = 0 ; j < 3 ; j ++)
			for (int i = 0; i < n; i++)cin >> a[j][i];
 
		for(int i = 0; i < n ; i ++)
			for(int j = 7 ; j > 0; j --)
				for(int k = 0 ; k < 3 ; k++)
					if ((j >> k) & 1) {
						f[j] = max(f[j], f[j - (1 << k)] + a[k][i]);
					}
 
		cout << f[7] << endl;
		memset(f, 0, sizeof f);
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
