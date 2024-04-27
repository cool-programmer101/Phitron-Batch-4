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
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = 1;
    for (int i = 1; i < n; ++i)
        ans = max(ans, min(a / i, b / (n - i)));
    cout << ans << '\n';
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
