#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll n = (r - l + 1) / 2;
    vector<pair<ll, ll>> v;
    for (ll i = l; i <= r - 1; i += 2)
    {
        if (gcd(i, i + 1) == 1)
        {
            v.push_back({i, i + 1});
        }
    }
    if (v.size() >= n)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
