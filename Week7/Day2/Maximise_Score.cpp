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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = min(abs(a[0] - a[1]), abs(a[n - 1] - a[n - 2]));
    int ii = INT_MIN, jj = INT_MIN, anss = INT_MAX;
    for (int i = 1; i < (n - 1); i++)
    {
        ii = abs(a[i] - a[i - 1]);
        jj = abs(a[i] - a[i + 1]);
        anss = min(anss, max(ii, jj));
    }
    cout << min(anss, ans) << endl;
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
