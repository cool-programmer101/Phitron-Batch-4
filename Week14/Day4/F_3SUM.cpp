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
    ll n;
    cin >> n;
    int cnt[10] = {};
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        cnt[x % 10]++;
    }
    vll v;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <min(cnt[i], 3); j++)
        {
            v.push_back(i);
        }
    }
    ll m = v.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            for (int k = j + 1; k < m; k++)
            {
                if ((v[i] + v[j] + v[k]) % 10 == 3)
                {
                    cout <<"YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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