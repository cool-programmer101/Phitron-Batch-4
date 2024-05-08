#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
ll calc(vector<int> &a)
{
    ll zero = 0, ans = 0;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        if (a[i] == 0)
            ++zero;
        else
            ans += zero;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = calc(a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ans = max(ans, calc(a));
            a[i] = 0;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ans = max(ans, calc(a));
            a[i] = 1;
            break;
        }
    }
    cout << ans << endl;
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
