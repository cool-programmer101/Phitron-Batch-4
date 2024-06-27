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
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x, ans = 15;
        cin >> x;

        for (int j = 0; j <= 15; j++)
            for (int k = 0; k <= 15; k++)
                if (((x + j) << k) % 32768 == 0)
                    ans = min(ans, j + k);

        cout << ans << " ";
    }
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