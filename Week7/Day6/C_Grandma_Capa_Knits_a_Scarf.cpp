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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n + 1;
    for (int c = 0; c < 26; ++c)
    {
        int l = 0, r = n - 1, cnt = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++, r--;
            }
            else if (s[l] == char('a' + c))
            {
                cnt++, l++;
            }
            else if (s[r] == char('a' + c))
            {
                cnt++, r--;
            }
            else
            {
                cnt = n + 1;
                break;
            }
        }
        ans = min(ans, cnt);
    }
    if (ans == n + 1)
        ans = -1;
    cout << ans << '\n';
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
