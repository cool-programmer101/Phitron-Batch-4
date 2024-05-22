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
    vll a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ttl = 0, m = a[0];
    for (ll i = 1; i < n; i++)
    {
        ttl += max(0LL, m - a[i]);
        m = max(m, a[i]);
    }
    cout << ttl << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
