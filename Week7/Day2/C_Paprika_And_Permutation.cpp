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

    vector<int> q;
    map<int, bool> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!st[x] && x <= n)
            st[x] = true;
        else
            q.push_back(x);
    }

    sort(q.begin(), q.end());

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!st[i])
        {
            if ((q[cnt] - 1) / 2 < i)
            {
                cout << -1 << endl;
                return;
            }
            else
                cnt++;
        }
    }

    cout << q.size() << endl;
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
