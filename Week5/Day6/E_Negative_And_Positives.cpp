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
    ll n, sum = 0,x=0;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            x++;
            a[i] = -a[i];
        }
        sum += a[i];
    }
    sort(a.begin(),a.end());
    if (x % 2 != 0)
        sum -= 2 * a[1];
    cout << sum << endl;
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
