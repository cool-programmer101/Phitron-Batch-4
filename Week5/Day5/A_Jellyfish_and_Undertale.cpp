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
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    ll ans = b;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans += min(a - 1, v[i]);
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
