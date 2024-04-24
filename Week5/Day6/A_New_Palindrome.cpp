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

    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
    }
    if (cnt == s.size() / 2 - 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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
