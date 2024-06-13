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
    int n, k;
    cin >> n >> k;
    vll a(n),bo(n);
    for (int i = 1; i <= k; i++)
        bo[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        bo[a[i]] = 1;
    }
    int l = 1, r = n;
    for (int i = 1; i <= k; i++)
    {
        if (!bo[i])
        {
            cout << "0 ";
            continue;
        }
        while (a[l] < i)
            l++;
        while (a[r] < i)
            r--;
        cout << (r - l + 1) * 2 << ' ';
    }
    cout << '\n';
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