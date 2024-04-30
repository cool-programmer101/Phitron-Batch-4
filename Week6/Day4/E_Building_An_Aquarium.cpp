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
    ll n, x, rem;
    cin >> n >> x;
    vector<ll>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll r = 0, l = 1e16, mid;
    while (l - r > 1)
    {
        mid = (r + l) / 2;
        rem = x;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mid)
            {
                rem -= mid - a[i];
            }
            if (rem < 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            r = mid;
        else
            l = mid;
    }
    cout << r << endl;
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
