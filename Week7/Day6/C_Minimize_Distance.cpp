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
    int n, k;
    cin >> n >> k;
    vector<int> a, b;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
            a.push_back(x);
        else if (x < 0)
            b.push_back(abs(x));
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    ll ans = 0;
    for (int i = 0; i < a.size(); i += k)
        ans += 2 * a[i];
    for (int i = 0; i < b.size(); i += k)
        ans += 2 * b[i];

    ans -= max((!a.empty() ? a[0] : 0), (!b.empty() ? b[0] : 0));
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
