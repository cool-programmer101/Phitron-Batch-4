#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(q), pref(n + 1, 0);
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
        pref[i + 1] = s;
    }
    vector<int> copy(n, 0);
    copy[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        copy[i] = max(copy[i - 1], a[i]);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
        int id = upper_bound(all(copy), b[i]) - copy.begin();
        cout << pref[id] << " ";
    }
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
