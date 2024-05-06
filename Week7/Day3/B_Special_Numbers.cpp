#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
const ll INF = 1e9 + 7;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll sl = 1, ans = 0;
    while (k)
    {
        if (k & 1)
        {
            ans += sl;
            ans = ans % INF;
        }
        k = k >> 1;
        sl *= n;
        sl %= INF;
    }
    cout << ans << endl;
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
