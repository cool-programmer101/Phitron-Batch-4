#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long int>
#define vd vector<double>
#define vs vector<string>
#define sort(a) sort(a.begin(), a.end());
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    string s, r;
    cin >> s;
    r = s;
    reverse(r.begin(), r.end());
    ll cnt = 0;
    bool flag = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "0\n";
    else
    {
        map<char, vector<int>> pos_s, pos_r;
        for (int i = 0; i < n; i++)
        {
            pos_s[s[i]].push_back(i);
            pos_r[r[i]].push_back(i);
        }

        vector<int> permutation(n);
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            for (int i = 0; i < pos_s[ch].size(); i++)
            {
                permutation[pos_r[ch][i]] = pos_s[ch][i];
            }
        }

        pbds<int> p;
        long long ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            ans += p.order_of_key(permutation[i]);
            p.insert(permutation[i]);
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll test;
    // cin>>test;
    // while(test--)
    {
        solve();
    }
    return 0;
}
