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
    string a, b;
    cin >> a >> b;
    int ma = 0;
    for (int i = 0; i < b.size(); i++)
        for (int j = 1; j <= b.size() - i; j++)
        {
            int f = a.find(b.substr(i, j));
            if (f >= 0)
                ma = max(ma, j);
        }
    cout << a.size() + b.size() - 2 * ma << endl;
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
