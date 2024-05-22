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
    ll n, m, cur, tct;
    cin >> n >> m;
    multiset<ll, greater<int>> tcts;

    while (n--)
    {
        cin >> tct;
        tcts.insert(tct);
    }

    while (m--)
    {
        cin >> cur;
        auto it = tcts.lower_bound(cur);
        if (it == tcts.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            tcts.erase(it);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
