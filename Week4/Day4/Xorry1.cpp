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
    ll x, t = 1;
    cin >> x;
    while (t < x)
    {
        t *= 2;
    }
    if (t == x)
    {
        cout << 0 << " " << x << endl;
    }
    else
    {
        t /= 2;
        cout << (t ^ x) << " " << t << endl;
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
