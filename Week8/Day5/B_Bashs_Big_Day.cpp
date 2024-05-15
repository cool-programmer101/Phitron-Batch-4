#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define mod 1000000007
const int N = 1e5 + 5;
void solve()
{
    int n;
    int cnt[N], s[N];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        for (int j = 1; j * j <= s[i]; j++)
        {
            if (s[i] % j == 0)
            {
                cnt[j]++;
                if (j * j != s[i])
                    cnt[s[i] / j]++;
            }
        }
    }
    int ans = 1;
    for (int i = 2; i < N; i++)
        ans = max(ans, cnt[i]);
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
