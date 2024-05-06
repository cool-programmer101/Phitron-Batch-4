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
    string s;
    cin >> s;

    int zero = 0, one = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            if (one > 0)
                one--;
            else
                break;
        }
        else
        {
            if (zero > 0)
                zero--;
            else
                break;
        }
    }

    cout << (zero + one) << '\n';
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
