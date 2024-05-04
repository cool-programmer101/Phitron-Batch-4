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

    int n;
    cin >> n;
    string s = "bbaa";
    if (n == 2)
        cout << "ab\n";
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i % 4];
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    //ll test;
    //cin >> test;
    //while (test--)
    //{
        solve();
    //}
    return 0;
}
