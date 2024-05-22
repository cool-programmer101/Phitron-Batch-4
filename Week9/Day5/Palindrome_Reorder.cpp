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
    ll cnt = 0;
    map<char, ll> mp;
    for (char c : s)
    {
        mp[c]++;
    }

    for (auto it : mp)
    {
        if (it.second % 2) cnt++;
    } 
    if (cnt > 1) 
    {
        cout << "NO SOLUTION\n";
        return;
    }

    string s1 = "", s2 = "";
    char odd_char = 0;

    for (auto it : mp) 
    {
        string str(it.second / 2, it.first);
        s1 += str;
        s2 = str + s2;
        if (it.second % 2) odd_char = it.first;
    }

    if (cnt == 1) 
    {
        cout << s1 << odd_char << s2 << "\n";
    } 
    else
    {
        cout << s1 << s2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
