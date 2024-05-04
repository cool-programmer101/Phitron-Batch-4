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
    if (n % 2 == 0)
    {
        int cnt = 2;
        for (int i = 1; i <= n; i++)
        {
            cout << cnt << " ";
            cnt += 2;
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
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
