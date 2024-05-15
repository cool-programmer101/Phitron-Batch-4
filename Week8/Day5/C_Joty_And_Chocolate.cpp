#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}
void solve()
{
    long long n, a, b, p, q, ans = 0, same;
    cin >> n >> a >> b >> p >> q;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    same = (n / lcm(a, b));
    ans -= (same * (p + q));
    ans += (same * max(p, q));
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
