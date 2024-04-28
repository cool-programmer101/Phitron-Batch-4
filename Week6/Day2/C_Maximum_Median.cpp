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
    ll n, op;
    cin >> n >> op;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    if (n == 1)
    {
        cout << v[0] + op;
        return;
    }

    int mid = n / 2;

    int cnt = 1;
    for (int i = mid + 1; i < n; i++)
    {
        int need = (v[i] - v[i - 1]) * cnt;
        if (need <= op)
        {
            op -= (v[i] - v[i - 1]) * cnt;
            cnt++;
        }
        else
        {
            cout << v[i - 1] + (op / cnt);
            return;
        }
    }
    cout << v.back() + (op / cnt);
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
