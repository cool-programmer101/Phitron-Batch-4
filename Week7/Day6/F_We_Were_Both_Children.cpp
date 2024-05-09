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
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        int cnt = 0;
        for (int j = 1; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                cnt += mp[j];
                if (j * j != x)
                {
                    cnt += mp[x / j];
                }
            }
        }
        mx = max(mx, cnt);
    }

    cout << mx << "\n";
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
