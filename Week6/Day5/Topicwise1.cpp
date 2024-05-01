#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
bool check(int n, int x, int y, ll mid)
{
    ll res = (mid / x) + (mid / y);
    return res >= n - 1;
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    ll l = 0;
    ll r = 1e10;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(n, x, y, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans + min(x, y) << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test;
    // cin>>test;
    // while(test--)
    //{
    solve();
    //}
    return 0;
}
