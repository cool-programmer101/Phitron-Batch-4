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
    ll n;
    cin >> n;
    ll ans;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ll x = i;
            ll y = n / i;
            if (x / __gcd(x, y) * y == n)
            {
                ans = i;
            }
        }
    }
    cout << ans << " " << n / ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
