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
    int n, b;
    cin >> n >> b;
    vector<int> a(n);
    int x= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] & b) == b)
        {
            x &= a[i];
        }
    }
    if (x == b)
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
