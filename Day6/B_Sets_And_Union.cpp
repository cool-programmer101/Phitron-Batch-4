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
    cin >> n;
    set<int> a[n];
    set<int> S;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            a[i].insert(x);
            S.insert(x);
        }
    }
    int ans = 0;
    for (auto i : S)
    {
        set<int> u;
        for (int j = 0; j < n; j++)
        {
            if (a[j].find(i) == a[j].end())
            {
                for (auto x : a[j])
                    u.insert(x);
            }
        }
        ans = max(ans, (int)u.size());
    }
    cout << ans << "\n";
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