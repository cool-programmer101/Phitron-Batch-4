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
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a);
    priority_queue<ll> pq;
    pq.push(sum);
    while (!a.empty())
    {
        ll x = pq.top();
        pq.pop();

        int y = a.back();

        if (x < y)
        {
            break;
        }

        if (x == y)
        {
            a.pop_back();
            continue;
        }
        pq.push(x / 2);
        pq.push((x + 1) / 2);
    }

    if (a.empty())
        cout << "YES\n";
    else
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