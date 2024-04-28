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
    map<ll, ll> m;

    for (ll i = 1; i <= 10000; i++)
    {
        ll k = i * i * i;
        m[k] = i;
    }

    ll t, x;
    cin >> t;

    while (t--)
    {
        int flag = 0;
        cin >> x;

        for (ll i = 1; i <= 10000; i++)
        {
            ll k = i * i * i;

            if (k >= x)
            {
                break;
            }

            ll tmp = x - k;

            if (m[tmp])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
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
