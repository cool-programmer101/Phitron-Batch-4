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
    vector<int> v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll sum = 0, count = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        sum += n - v[i];
        if (sum >= n)
            break;
        count++;
    }
    cout << count << endl;
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
