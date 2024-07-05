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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = INT_MAX;

    for (int st = 0; st < n - 1; st++)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == st)
            {
                a[cnt++] = 10 * (s[i] - '0') + (s[i + 1] - '0');
                i++;
            }
            else
                a[cnt++] = (s[i] - '0');
        }

        ll val = 0;
        for (int i = 0; i < cnt; i++)
        {
            if (a[i] == 0)
            {
                val = -1;
                break;
            }
            if (a[i] == 1)
                continue;
            val += a[i];
        }

        if (!val)
            val = 1;
        if (val == -1)
            val = 0;

        ans = min(ans, val);
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