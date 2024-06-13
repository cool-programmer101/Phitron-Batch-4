#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(), a.end());
#define srt(b) sort(b.begin(), b.end(), greater<int>());
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = 0;
    ll ans = max({0LL, a[0], a[0] + a[1]});
    for (int i = 2; i < n + 1; i++)
    {
        ans += max(0LL, a[i]);
    }
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