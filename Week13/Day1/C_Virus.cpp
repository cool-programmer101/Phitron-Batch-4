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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m), b;
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
    sort(a);
    for (int i = 0; i < m - 1; ++i)
    {
        b.pb(a[i + 1] - a[i] - 1);
    }

    ll tem = a[0] + n - a[m - 1] - 1;
    if (tem > 0)
        b.pb(tem);

    sort(b);
    ll cnt = 0, ans = 0;
    for (int i = b.size() - 1; i >= 0; --i)
    {

        if (b[i] - 2 * cnt > 0)
            ans += max(1ll, b[i] - 2 * cnt - 1);

        cnt += 2;
    }
    cout << n - ans << endl;
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
