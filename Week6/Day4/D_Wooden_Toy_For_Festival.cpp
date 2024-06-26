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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll l = -1, r = 1e9;
    ll m;
    while (l + 1 < r)
    {
        m = (l + r) >> 1;
        int i = 0;
        while (i + 1 < n && a[i] - a[0] <= 2 * m)
            i++;
        int j = n - 1;
        while (j - 1 >= 0 && a[n - 1] - a[j] <= 2 * m)
            j--;
        if (i > j || a[j] - a[i] <= 2 * m)
        {
            r = m;
        }
        else
            l = m;
    }
    cout << r << endl;
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
