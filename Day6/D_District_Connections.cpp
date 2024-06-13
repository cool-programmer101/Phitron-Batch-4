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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int x = -1;
    for (int i = 1; i <= n; i++)
    {
        if (v[1] != v[i])
            x = i;
    }
    if (x == -1)
    {
        cout << "NO" << endl;
        continue;
    }
    else
    {
        cout << "YES" << endl;
        cout << 1 << " " << x << endl;
        for (int i = 2; i <= n; i++)
        {
            if (i != x)
            {
                if (v[i] != v[1])
                    cout << 1 << " " << i << endl;
                else
                    cout << i << " " << x << endl;
            }
        }
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
