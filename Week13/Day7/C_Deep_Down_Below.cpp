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
    vvi a;
    ll mx = 0;
    fi(i, 0, n)
    {
        int k;
        cin >> k;
        vin(b, k);
        mx = max(mx, maxima(b));
        a.pb(b);
    }
    sort(all(a), cmp);

    auto good = [&](int mid)
    {
        ll w = mid;
        for (auto i : a)
        {
            for (auto j : i)
            {
                if (w > j)
                {
                    w++;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    };

    ll lo = 0, ho = mx + 1, ans;
    while (lo <= ho)
    {
        int mid = ho - (ho - lo) / 2;
        if (good(mid))
        {
            ans = mid;
            ho = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    cout << ans << "\n";
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