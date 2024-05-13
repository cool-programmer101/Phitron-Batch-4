#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
#define nl endl

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mpp;
    for (ll i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        for (ll j = 2; j * j <= temp; j++)
        {
            while (temp % j == 0)
            {
                mpp[j]++;
                ;
                temp /= j;
            }
        }
        if (temp != 1)
            mpp[temp]++;
    }
    bool ans = true;
    for (auto i : mpp)
    {
        if ((i.second % n) != 0)
        {
            ans = false;
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
