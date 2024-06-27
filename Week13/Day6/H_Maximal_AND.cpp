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
    ll n, k;
    cin >> n >> k;

    ll a;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (i == 1)
        {
            a = x;
        }
        else
        {
            a &= x;
        }
        for (ll j = 0; j < 31; j++)
        {
            if ((x & (1 << j)) == 0)
            {
                mp[j]++;
            }
        }
    }

    for (ll i = 30; i >= 0; i--)
    {
        if (mp[i] && mp[i] <= k)
        {
            k -= mp[i];
            a |= 1 << i;
        }
    }

    cout << a << "\n";
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