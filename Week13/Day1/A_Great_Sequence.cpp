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
    int n, x;
    cin >> n >> x;
    multiset<ll> s;
    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        auto f = s.find(v[i]);
        if (f != s.end())
        {
            auto it = s.find(v[i] * x);
            if (it != s.end())
            {
                s.erase(it);
                s.erase(f);
            }
            else
            {
                ans++;
                s.erase(f);
            }
        }
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