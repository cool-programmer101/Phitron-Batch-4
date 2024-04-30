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
    ll n, t;
    cin >> n >> t;
    vector<ll> k(n);

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }

    ll lx = 0, hh = 1e18, ans = 0;
    while (lx <= hh)
    {

        ll mid = (lx + hh) / 2;

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {

            sum += (mid / k[i]);

            if (sum >= t)
            {

                break;
            }
        }

        if (sum >= t)
        {

            ans = mid;

            hh = mid - 1;
        }
        else
        {

            lx = mid + 1;
        }
    }

    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test;
    // cin>>test;
    // while(test--)
    //{
    solve();
    //}
    return 0;
}
