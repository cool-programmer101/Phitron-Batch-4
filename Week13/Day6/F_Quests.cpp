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
    int n, d;
    ll c;
    cin >> n >> c >> d;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<ll>());
    int l = 0, r = d + 2;
    while (l < r)
    {
        int m = l + (r - l + 1) / 2;
        ll ans = 0;
        int curr = 0;
        for (int i = 0; i < d; i++)
        {
            if (i % m < n)
            {
                ans += a[i % m];
            }
        }
        if (ans >= c)
            l = m;
        else
            r = m - 1;
    }
    if (l == d + 2)
    {
        cout << "Infinity";
        return;
    }
    if (l == 0)
    {
        cout << "Impossible";
        return;
    }
    cout << l - 1;
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