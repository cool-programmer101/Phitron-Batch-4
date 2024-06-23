#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define my_sort(a) sort(a.begin(), a.end());
#define my_srt(b) sort(b.begin(), b.end(), greater<int>());
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vll a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            a[i] = a[i] + 1;
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] % a[i - 1] != 0)
            b[i] = a[i];
        else
        {
            b[i] = a[i] + 1;
            a[i] = a[i] + 1;
        }
    }

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
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
