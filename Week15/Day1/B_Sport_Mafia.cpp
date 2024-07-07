#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(), a.end());
#define srt(b) sort(b.begin(), b.end(), greater<int>());
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll l = 0, hi = n, mid = 0, ans = 0;
    while (hi >= l)
    {
        mid = l + (hi - l) / 2;
        ll end = ((n - mid) * (n - mid + 1) / 2) - mid;

        if (end == k)
        {
            ans = mid;
            break;
        }
        if (end > k)
        {
            l = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test;
    // cin>>test;
    // while(test--)
    //{
    solve();
    //}
    return 0;
}
