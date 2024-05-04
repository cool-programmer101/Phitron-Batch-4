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
    ll n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    a[n] = (n * (n + 1)) / 2 - sum;
    k = k % (n + 1);
    for (int i = n + 1 - k; i < n + 1; i++)
        cout << a[i] << " ";
    for (int i = 0; i < n - k; i++)
        cout << a[i] << " ";

    cout << "\n";
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
